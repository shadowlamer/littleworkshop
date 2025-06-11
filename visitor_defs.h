#ifndef VISITOR_DEFS_H
#define VISITOR_DEFS_H

#include "sprites_defs.h"

// Типы персонажей
typedef enum {
  CHARACTER_FARMER,
  CHARACTER_GIRL,
  CHARACTER_FISHERMAN,
  CHARACTER_BUSINESSMAN,
  CHARACTER_ARTIST,
  CHARACTER_MOM,
  CHARACTER_OLD_LADY,
  CHARACTER_ARCHITECT,
  CHARACTER_MAGIC_OLD_MAN,
  NUM_CHARACTER_TYPES
} t_character_type;

typedef struct {
  t_sprite_id background;
  t_sprite_id face;
  t_sprite_id nose; 
  t_sprite_id eyes;
  t_sprite_id glasses;
  t_sprite_id hat;
  t_sprite_id cloth;
} t_portrait;

typedef struct {
  char *name;
  t_character_type type;
  t_portrait portrait;
  char *catch_phrase;
} t_visitor_profile;

void generate_visitor_profile(t_visitor_profile *p_profile,t_character_type character_type);

#endif // VISITOR_DEFS_H
