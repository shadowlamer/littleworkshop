#include "scr_addr.h"

#include "furniture_defs.h"
//#link "furniture_defs.c"

#include "sprites_defs.h"
//#link "sprites_defs.c"

#include "sprite_engine.h"
//#link "sprite_engine.c"

#include "visitor_defs.h"
//#link "visitor_defs.c"


void draw_furniture(t_furniture_scheme_id scheme_id);

void main() {
  draw_furniture(SCHEME_SIMPLE_CHAIR);
  while (1);
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

