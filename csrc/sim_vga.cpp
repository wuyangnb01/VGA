#include <nvboard.h>
#include <Vvga.h>
#include <stdio.h>
#include <time.h>

static Vvga dut;

void nvboard_bind_all_pins(Vvga* top);

static void single_cycle() {
  dut.CLOCK_50 = 0; dut.eval();
  dut.CLOCK_50 = 1; dut.eval();
}

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();
  
  printf("=== VGA Test Start ===\n");
  printf("Displaying: Pure Red (R=FF, G=00, B=00)\n");
  printf("VGA Mode: 640x480@60Hz\n");
  printf("Pixel Clock: 25MHz\n");
  printf("Frame Pixels: 800x525 = 420,000\n");
  printf("Calculated FPS: 25,000,000 / 420,000 = 59.52 Hz\n");
  printf("CLOCK_50 cycles per frame: 420,000 * 2 = 840,000\n");
  
  const int FRAME_CYCLES = 840000;
  int frame_count = 0;
  int cycle_count = 0;
  uint64_t start_time = time(NULL);
  uint64_t last_time = start_time;
  
  while(1) {
    nvboard_update();
    single_cycle();
    
    cycle_count++;
    if (cycle_count >= FRAME_CYCLES) {
      cycle_count = 0;
      frame_count++;
      
      uint64_t current_time = time(NULL);
      if (current_time > last_time) {
        printf("Time: %lu | Frames: %d | FPS: %.2f\n", 
               current_time - start_time, 
               frame_count,
               (double)frame_count / (current_time - start_time));
        last_time = current_time;
      }
    }
  }
  
  nvboard_quit();
  return 0;
}