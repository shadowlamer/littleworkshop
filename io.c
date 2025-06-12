#include "io.h"
#include "stdint.h"

void delay(unsigned int interval) {
  for (;--interval > 0;) {
    __asm 
      ei
      halt
    __endasm;	  	
  }
}

void print(char *message, uint8_t start_x, uint8_t start_y) {
  uint8_t x = start_x;
  uint8_t y = start_y;
  
  char *p_scr;
  char const *p_font;

  p_font = font;

  for (; *message!=0; message++) {
    char const *p_char;
    char s;
    
    if (*message == '\n') {
      y++;
      x = start_x;
      continue;
    }

    
    if (*message >= 0x20 && *message <= 0x2f) {
      s = *message - ' ';
    } else {
      s = *message;
    }

    if (x == 0 && s == 0) continue;
    
    p_char = p_font + (s * 8);
    p_scr = ((char *)screen_line_addrs[y * 8]);
    p_scr += (x / 8);
    
    for (unsigned char i = 0; i < 8; i++) {
      char *p;
      unsigned int z;
      z = p_char[i];
      z <<= (8 - (x % 8));
      p = p_scr + (i * 256);
      *p |= z >> 8;
      p++;
      *p |= z;
    }
    if (x >= 31 * 8) {
     y++;
     x = 0; 
    } else {
      x += font_width[s];
    }
    delay(1);
  }
}
