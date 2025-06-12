#ifndef SPRRITE_ENGINE_H
#define SPRITE_ENGINE_H

#include "scr_addr.h"

#include "sprites_defs.h"

void draw_simple_sprite(t_sprite_id sprite, uint8_t x, uint8_t y);
void draw_sprite(t_sprite_id sprite_id, uint8_t x, uint8_t y);

#endif // SPRITE_ENGINE_H
