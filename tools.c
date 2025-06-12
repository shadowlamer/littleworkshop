#include "tools.h"

// Генератор случайного числа (простой)
uint8_t random_upto(uint8_t max) {
    static uint8_t seed = 0xAB;
    seed = (seed * 0x19) + 0x3D;
    return seed % max;
}

