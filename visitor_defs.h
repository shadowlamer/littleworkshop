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
  CHARACTER_WIZARD,
  NUM_CHARACTER_TYPES
} t_character_type;


typedef struct {
  char *name;
  t_character_type type;
  t_sprite_id portrait;
  char *catch_phrase;
} t_visitor_profile;

void generate_visitor_profile(t_visitor_profile *p_profile,t_character_type character_type);

#endif // VISITOR_DEFS_H
