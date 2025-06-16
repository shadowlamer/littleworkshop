#include "scr_addr.h"

#include "furniture_defs.h"
//#link "furniture_defs.c"

#include "sprites_defs.h"
//#link "sprites_defs.c"

#include "sprite_engine.h"
//#link "sprite_engine.c"

#include "visitor_defs.h"
//#link "visitor_defs.c"

#include "font.h"
#include "io.h"
//#link "io.c"

#include "orders.h"
//#link "orders.c"

#include "tools.h"
//#link "tools.c"

#include "keyboard.h"
//#link "keyboard.c"

#include <string.h>

void draw_furniture(t_furniture_scheme_id scheme_id);
void render_order(t_order *order);

void clear_scr_with_attr(uint8_t attr);

void main() {
  t_order test_order;
  while (1) {
  generate_order(&test_order);
  clear_scr_with_attr(0b00111000);
  render_order(&test_order);
  while (getkey() == 0);
  }
}

void draw_furniture(t_furniture_scheme_id scheme_id) {
  // --- Объявляем все переменные в начале ---
  const t_furniture_scheme *scheme;
  const t_assembly_part *part_list;
  const t_part *part_data;
  t_sprite_id sprite_id  ;

  // --- Инициализируем переменные ---
  scheme = &furniture_schemes[scheme_id];
  part_list = scheme->parts;

  // --- Проходим по всем частям схемы ---
  for (uint8_t i = 0; i < scheme->required_parts_count; ++i) {
    const t_assembly_part *assembly_part = &part_list[i];

    // Получаем данные о типе части
    part_data = &available_parts[assembly_part->part_id];

    // Получаем ID спрайта
    sprite_id = part_data->sprite;

    // Рисуем спрайт по указанным координатам
    draw_sprite(sprite_id, assembly_part->x, assembly_part->y);
  }
}

void render_order(t_order *order) {
  draw_furniture(order->furniture_scheme_id);
  draw_simple_sprite(order->visitor.portrait, 10, 10);
  print((char*)order->furniture_scheme->name, 10, 10);
  print(order->visitor.catch_phrase, 10, 11);
}

void clear_scr_with_attr(uint8_t attr) {
  memset((uint8_t*)ATTR_SCREEN_BUFFER_START, attr, 32*24);
  memset((uint8_t*)SCREEN_BUFFER_START, 0x00, 192*32);
}

