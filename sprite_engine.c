#include "sprite_engine.h"

void draw_sprite(t_sprite_id sprite_id, uint8_t x, uint8_t y) {
  // --- Объявление всех переменных в начале функции ---
  const t_sprite *spr = sprites + sprite_id;
  const uint8_t screen_x_byte = x / 8;
  const uint8_t screen_x_bit = x % 8;
  uint8_t line;
  uint8_t col;
  uint8_t left_part;
  uint8_t right_part;
  uint8_t left_part_mask;
  uint8_t right_part_mask;

  uint8_t *p_screen;
  uint8_t *p_sprite_data = (uint8_t*)spr->data;
  uint8_t *p_mask_data  = (uint8_t*)(spr->data + (spr->width * spr->height * 8));

  // --- Отрисовка спрайта ---
  for (line = 0; line < spr->height * 8; line++) {
    p_screen = (uint8_t*)(screen_line_addrs[line + y] + screen_x_byte);
    for (col = 0; col < spr->width; col++) {
      if (screen_x_bit == 0) {
        // Без сдвига
        p_screen[col] &= ~(*p_mask_data);
        p_screen[col] |= *p_sprite_data;
      } else {
        // Со сдвигом
        left_part_mask = ~(*p_mask_data >> screen_x_bit);
        right_part_mask = ~(*p_mask_data << (8 - screen_x_bit));
        left_part = *p_sprite_data >> screen_x_bit;
        right_part = *p_sprite_data << (8 - screen_x_bit);
        p_screen[col] &= left_part_mask;
        p_screen[col] |= left_part;
        p_screen[col + 1] &= right_part_mask;
        p_screen[col + 1] |= right_part;
      }
      p_sprite_data++;
      p_mask_data++;
    }
  }
}
