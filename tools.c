#include "tools.h"

static uint16_t seed = 0xAB;

uint16_t random() {
  __asm
  ld hl, (_seed)
  ld a,r
  ld d,a
  ld e,(hl)
  add hl,de
  add a,l
  xor h
  ld (_seed),hl
  __endasm;
}
  
// Генератор случайного числа (простой)
uint8_t random_upto(uint8_t max) {
    return random() % max;
}

