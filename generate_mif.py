import sys

IMAGE_WIDTH = 640
IMAGE_HEIGHT = 512
DEPTH = IMAGE_WIDTH * IMAGE_HEIGHT
WIDTH = 12

def rgb444_to_hex(r, g, b):
    r4 = (r >> 4) & 0xF
    g4 = (g >> 4) & 0xF
    b4 = (b >> 4) & 0xF
    return (r4 << 8) | (g4 << 4) | b4

def get_pixel_color(x, y):
    if y >= 480:
        return 0xFFF
    
    center_x = IMAGE_WIDTH // 2
    center_y = 240
    radius = 150
    
    dx = x - center_x
    dy = y - center_y
    distance_sq = dx * dx + dy * dy
    
    if distance_sq <= radius * radius:
        intensity = int(255 * (1 - distance_sq / (radius * radius)))
        return rgb444_to_hex(intensity, 0, 255 - intensity)
    
    if x < IMAGE_WIDTH // 4:
        return rgb444_to_hex(255, 0, 0)
    elif x < IMAGE_WIDTH // 2:
        return rgb444_to_hex(0, 255, 0)
    elif x < IMAGE_WIDTH * 3 // 4:
        return rgb444_to_hex(0, 0, 255)
    else:
        return rgb444_to_hex(255, 255, 0)

def generate_mif(output_file):
    with open(output_file, 'w') as f:
        for col in range(IMAGE_WIDTH):
            for row in range(IMAGE_HEIGHT):
                color = get_pixel_color(col, row)
                f.write(f"{color:03X}\n")

if __name__ == "__main__":
    output = "my_picture.mif"
    if len(sys.argv) > 1:
        output = sys.argv[1]
    generate_mif(output)
    print(f"Generated {output} with {DEPTH} entries")