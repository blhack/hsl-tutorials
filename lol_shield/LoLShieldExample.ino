#include <Charliplexing.h> 

#define SIZE_X 14
#define SIZE_Y 9

void setup() {
  LedSign::Init();
  
  for(byte x=0; x<SIZE_X; ++x) {
    set(x, 0, 1);
    set(x, SIZE_Y-1, 1);
  }
  for(byte y=1; y<SIZE_Y; ++y) {
    set(0, y, 1); 
    set(SIZE_X-1, y, 1); 
  }
}

void set(byte x, byte y, byte value) {
  delay(10);
  if (x == 1 && (y == 0 || y == 3))
    return;
  LedSign::Set(x, y, value); 
}

void loop() {
  
}


