#include "io.h"

void delay(unsigned int interval) {
  for (;--interval > 0;) {
    __asm 
      ei
      halt
    __endasm;	  	
  }
}

void print(char *message, unsigned char x, unsigned char y) {
  char *p_scr;
  char const *p_font;

  p_font = font;

  for (; *message!=0; message++) {
    char const *p_char;
    char s;
    
    if (*message == '\n') {
      y++;
      x = 0;
      continue;
    }
    
    if (*message == '\\') {
      message++;
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
