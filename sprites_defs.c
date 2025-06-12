#include "sprites_defs.h"

const t_sprite sprites[NUM_SPRITES] = {
  
// Детали мебели  
  [SPRITE_SIMPLE_WOODEN_LEG] = { .width = 1, .height = 2, .data = sprite_simple_wooden_leg },
  [SPRITE_SIMPLE_WOODEN_SEAT] = { .width = 4, .height = 2, .data = sprite_simple_wooden_seat },
  [SPRITE_SIMPLE_WOODEN_BACK] = { .width = 2, .height = 4, .data = sprite_simple_wooden_back },
  [SPRITE_CUSHIONED_SEAT] = { .width = 4, .height = 2, .data = sprite_cushion_seat },
  [SPRITE_CUSHIONED_BACK] = { .width = 2, .height = 2, .data = sprite_cushion_back },
  [SPRITE_UPHOLSTERED_BACK] = { .width = 2, .height = 4, .data = sprite_upholstered_back },
  [SPRITE_UPHOLSTERED_SEAT] = { .width = 4, .height = 2, .data = sprite_upholstered_seat },
  [SPRITE_STURDY_WOODEN_LEG] = { .width = 1, .height = 3, .data = sprite_sturdy_wooden_leg },
  [SPRITE_STURDY_TOP_PLATE] = { .width = 4, .height = 1, .data = sprite_sturdy_top_plate },
  [SPRITE_OFFICE_WOODEN_LEG] = { .width = 1, .height = 4, .data = sprite_office_wooden_leg },
  [SPRITE_OFFICE_HARD_SEAT] = { .width = 4, .height = 1, .data = sprite_office_hard_seat },
  [SPRITE_OFFICE_HARD_BACK] = { .width = 2, .height = 4, .data = sprite_office_hard_back },
  [SPRITE_OFFICE_CUSHION_SEAT] = { .width = 2, .height = 4, .data = sprite_office_cushion_seat },
  [SPRITE_OFFICE_CUSHION_BACK] = { .width = 2, .height = 4, .data = sprite_office_cushion_back },
  [SPRITE_OFFICE_UPHOLSTERY] = { .width = 2, .height = 4, .data = sprite_office_upholstery },

  [SPRITE_ARTISTIC_FRAME_LEFT] = { .width = 4, .height = 2, .data = sprite_artistic_frame_left },
  [SPRITE_ARTISTIC_FRAME_RIGHT] = { .width = 4, .height = 2, .data = sprite_artistic_frame_right },
  [SPRITE_ARTISTIC_HEADBOARD] = { .width = 4, .height = 2, .data = sprite_artistic_headboard },
  [SPRITE_ARTISTIC_FOOTBOARD] = { .width = 4, .height = 2, .data = sprite_artistic_footboard },
  [SPRITE_ARTISTIC_BASE_BOARD] = { .width = 4, .height = 2, .data = sprite_artistic_base_board },
  [SPRITE_ARTISTIC_CARVED_DECORATION] = { .width = 4, .height = 2, .data = sprite_artistic_carved_decoration },

  [SPRITE_CHILD_LEG] = { .width = 1, .height = 2, .data = sprite_child_leg },
  [SPRITE_CHILD_SEAT] = { .width = 1, .height = 2, .data = sprite_child_seat },
  [SPRITE_CHILD_BACK] = { .width = 1, .height = 2, .data = sprite_child_back },
  [SPRITE_CHILD_CORNER_GUARD] = { .width = 1, .height = 2, .data = sprite_child_corner_guard },

  [SPRITE_ELEGANT_LEG] = { .width = 1, .height = 4, .data = sprite_elegant_leg },
  [SPRITE_ELEGANT_SEAT] = { .width = 1, .height = 4, .data = sprite_elegant_seat },
  [SPRITE_ELEGANT_BACK] = { .width = 1, .height = 4, .data = sprite_elegant_back },
  [SPRITE_ELEGANT_ARMREST] = { .width = 1, .height = 4, .data = sprite_elegant_armrest },

  [SPRITE_MAGIC_LEG] = { .width = 2, .height = 2, .data = sprite_magic_leg },
  [SPRITE_MAGIC_SEAT] = { .width = 2, .height = 2, .data = sprite_magic_seat },
  [SPRITE_MAGIC_BACK] = { .width = 2, .height = 2, .data = sprite_magic_back },
  [SPRITE_MAGIC_CARVED_DETAIL] = { .width = 2, .height = 2, .data = sprite_magic_carved_detail },

  [SPRITE_CAT_FLOOR] = { .width = 4, .height = 2, .data = sprite_cat_floor },
  [SPRITE_CAT_WALL_LEFT] = { .width = 2, .height = 4, .data = sprite_cat_wall_left },
  [SPRITE_CAT_WALL_RIGHT] = { .width = 2, .height = 4, .data = sprite_cat_wall_right },
  [SPRITE_CAT_WALL_BACK] = { .width = 4, .height = 4, .data = sprite_cat_wall_back },
  [SPRITE_CAT_ROOF] = { .width = 4, .height = 2, .data = sprite_cat_roof },
  [SPRITE_CAT_WINDOW] = { .width = 2, .height = 2, .data = sprite_cat_window },
  [SPRITE_CANOPIED_FRAME_LEFT] = { .width = 2, .height = 6, .data = sprite_canopied_frame_left },
  [SPRITE_CANOPIED_FRAME_RIGHT] = { .width = 2, .height = 6, .data = sprite_canopied_frame_right },
  [SPRITE_CANOPIED_HEADBOARD] = { .width = 4, .height = 3, .data = sprite_canopied_headboard },
  [SPRITE_CANOPIED_FOOTBOARD] = { .width = 4, .height = 2, .data = sprite_canopied_footboard },
  [SPRITE_CANOPIED_BASE_BOARD] = { .width = 4, .height = 1, .data = sprite_canopied_base_board },
  [SPRITE_CANOPIED_VERTICAL_SUPPORT] = { .width = 1, .height = 6, .data = sprite_canopied_vertical_support },
  [SPRITE_CANOPIED_CANOPY] = { .width = 4, .height = 2, .data = sprite_canopied_canopy },

  // Бакграунды
  [SPRITE_BG_OUTDOOR] = { .width = 32, .height = 24, .data = sprite_bg_outdoor },
  [SPRITE_BG_HOME] = { .width = 32, .height = 24, .data = sprite_bg_home },
  [SPRITE_BG_SHORE] = { .width = 32, .height = 24, .data = sprite_bg_shore },
  [SPRITE_BG_OFFICE] = { .width = 32, .height = 24, .data = sprite_bg_office },
  [SPRITE_BG_STUDIO] = { .width = 32, .height = 24, .data = sprite_bg_studio },
  [SPRITE_BG_KITCHEN] = { .width = 32, .height = 24, .data = sprite_bg_kitchen },
  [SPRITE_BG_PARLOUR] = { .width = 32, .height = 24, .data = sprite_bg_parpour },
  [SPRITE_BG_DRAWING_ROOM] = { .width = 32, .height = 24, .data = sprite_bg_drawing_room },
  [SPRITE_BG_CASTLE] = { .width = 32, .height = 24, .data = sprite_bg_castle },

  // Одежда
  [SPRITE_CLOTH_WORK_JACKET] = { .width = 2, .height = 4, .data = sprite_cloth_work_jacket },
  [SPRITE_CLOTH_DRESS] = { .width = 2, .height = 4, .data = sprite_cloth_dress },
  [SPRITE_CLOTH_SAILOR_COAT] = { .width = 2, .height = 4, .data = sprite_cloth_sailor_coat },
  [SPRITE_CLOTH_SUIT] = { .width = 2, .height = 4, .data = sprite_cloth_suit },
  [SPRITE_CLOTH_PAINTED_SHIRT] = { .width = 2, .height = 4, .data = sprite_cloth_painted_shirt },
  [SPRITE_CLOTH_TSHIRT] = { .width = 2, .height = 4, .data = sprite_cloth_tshirt },
  [SPRITE_CLOTH_SHAWL] = { .width = 2, .height = 4, .data = sprite_cloth_shawl },
  [SPRITE_CLOTH_ENGINEER_JACKET] = { .width = 2, .height = 4, .data = sprite_cloth_engineer_jacket },
  [SPRITE_CLOTH_ROBE] = { .width = 2, .height = 4, .data = sprite_cloth_robe },

  // Лицо
  [SPRITE_NOSE1] = { .width = 1, .height = 1, .data = sprite_nose1 },
  [SPRITE_NOSE2] = { .width = 1, .height = 1, .data = sprite_nose2 },
  [SPRITE_NOSE3] = { .width = 1, .height = 1, .data = sprite_nose3 },
  [SPRITE_MOUTH1] = { .width = 1, .height = 1, .data = sprite_mouth1 },
  [SPRITE_MOUTH2] = { .width = 1, .height = 1, .data = sprite_mouth2 },
  [SPRITE_MOUTH3] = { .width = 1, .height = 1, .data = sprite_mouth3 },
  [SPRITE_EYES1] = { .width = 1, .height = 1, .data = sprite_eyes1 },
  [SPRITE_EYES2] = { .width = 1, .height = 1, .data = sprite_eyes2 },
  [SPRITE_EYES3] = { .width = 1, .height = 1, .data = sprite_eyes3 },
  [SPRITE_HAIR1] = { .width = 1, .height = 2, .data = sprite_hair1 },
  [SPRITE_HAIR2] = { .width = 1, .height = 2, .data = sprite_hair2 },
  [SPRITE_HAIR3] = { .width = 1, .height = 2, .data = sprite_hair3 },
};

// спрайт и маска в одном массиве
const static char sprite_simple_wooden_leg[] =
{/*{w:8,h:16,bpp:1,brev:1,count:2}*/
  0x7A,0x7E,0x7A,0x7E,0x7A,0x7E,0x34,0x3C,0x34,0x3C,0x34,0x3C,0x18,0x18,0x18,0x18,

  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x3C,0x3C,0x3C,0x3C,
  };

const static char sprite_simple_wooden_seat[] =
{/*{w:32,h:16,bpp:1,brev:1,count:2}*/
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0x80,0x04,0x00,0x00,0x80,0x08,0x00,0x00,0x80,
  0x08,0x00,0x01,0x00,0x11,0xFF,0xE1,0x00,0x11,0xFF,0xE2,0x00,0x20,0x00,0x02,0x00,
  0x20,0x00,0x04,0x00,0x40,0x00,0x04,0x00,0x7F,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0xC0,0x1F,0xFF,0xFF,0x80,
  0x1F,0xFF,0xFF,0x80,0x3F,0xFF,0xFF,0x80,0x3F,0xFF,0xFF,0x00,0x3F,0xFF,0xFF,0x00,
  0x3F,0xFF,0xFE,0x00,0x7F,0xFF,0xFE,0x00,0x7F,0xFF,0xFC,0x00,0xFF,0xFF,0xFC,0x00,
  };

const static char sprite_simple_wooden_back[] =
{/*{w:16,h:32,bpp:1,brev:1,count:2}*/
  0x00,0x00,0x00,0x00,0x3F,0xFC,0x20,0x03,0x20,0x01,0x20,0x01,0x30,0x01,0x33,0x31,
  0x32,0x21,0x32,0x21,0x22,0x21,0x22,0x21,0x22,0x21,0x22,0x21,0x22,0x21,0x62,0x21,
  0x42,0x21,0x42,0x41,0x42,0x41,0x42,0x41,0x42,0x63,0x42,0x22,0x46,0x22,0x44,0x22,
  0x44,0x62,0x44,0x42,0x40,0x02,0x40,0x02,0x60,0x04,0x3F,0xFC,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x3F,0xFC,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,
  0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,
  0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFE,0x7F,0xFE,0x7F,0xFE,
  0x7F,0xFE,0x7F,0xFE,0x7F,0xFE,0x7F,0xFE,0x7F,0xFC,0x3F,0xFC,0x00,0x00,0x00,0x00,
  };

const static char sprite_cushion_seat[] =
{/*{w:32,h:16,bpp:1,brev:1,count:2}*/
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x1C,0x00,0x00,0x06,0x63,0x38,0x00,0x09,0x80,0xC4,0x00,0x10,0x00,0x02,0x00,
  0x24,0x00,0x09,0x00,0x20,0x10,0x81,0x00,0x40,0x00,0x02,0x00,0x41,0x02,0x02,0x00,
  0x40,0x00,0x04,0x00,0x21,0x87,0x18,0x00,0x1E,0x78,0xE0,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x1C,0x00,0x00,0x06,0x7F,0x38,0x00,0x0F,0xFF,0xFC,0x00,0x1F,0xFF,0xFE,0x00,
  0x3F,0xFF,0xFF,0x00,0x3F,0xFF,0xFF,0x00,0x7F,0xFF,0xFE,0x00,0x7F,0xFF,0xFE,0x00,
  0x7F,0xFF,0xFC,0x00,0x3F,0xFF,0xF8,0x00,0x1E,0x78,0xE0,0x00,0x00,0x00,0x00,0x00,
  };

const static char sprite_cushion_back[] = {0};
const static char sprite_upholstered_back[] = {0};
const static char sprite_upholstered_seat[] = {0};
const static char sprite_sturdy_wooden_leg[] = {0};
const static char sprite_sturdy_top_plate[] = {0};
const static char sprite_office_wooden_leg[] = {0};
const static char sprite_office_hard_seat[] = {0};
const static char sprite_office_hard_back[] = {0};
const static char sprite_office_cushion_seat[] = {0};
const static char sprite_office_cushion_back[] = {0};
const static char sprite_office_upholstery[] = {0};
const static char sprite_artistic_bed_frame[] = {0};
const static char sprite_artistic_frame_left[] = {0};
const static char sprite_artistic_frame_right[] = {0};
const static char sprite_artistic_headboard[] = {0};
const static char sprite_artistic_footboard[] = {0};
const static char sprite_artistic_base_board[] = {0};
const static char sprite_artistic_carved_decoration[] = {0};
const static char sprite_child_leg[] = {0};
const static char sprite_child_seat[] = {0};
const static char sprite_child_back[] = {0};
const static char sprite_child_corner_guard[] = {0};
const static char sprite_elegant_leg[] = {0};
const static char sprite_elegant_seat[] = {0};
const static char sprite_elegant_back[] = {0};
const static char sprite_elegant_armrest[] = {0};
const static char sprite_magic_carved_detail[] = {0};
const static char sprite_magic_leg[] = {0};
const static char sprite_magic_seat[] = {0};
const static char sprite_magic_back[] = {0};
const static char sprite_cat_floor[] = {0};
const static char sprite_cat_wall_left[] = {0};
const static char sprite_cat_wall_right[] = {0};
const static char sprite_cat_wall_back[] = {0};
const static char sprite_cat_roof[] = {0};
const static char sprite_cat_window[] = {0};
const static char sprite_canopied_frame_left[] = {0};
const static char sprite_canopied_frame_right[] = {0};
const static char sprite_canopied_headboard[] = {0};
const static char sprite_canopied_footboard[] = {0};
const static char sprite_canopied_base_board[] = {0};
const static char sprite_canopied_vertical_support[] = {0};
const static char sprite_canopied_canopy[] = {0};

// Бакграунды
const static char sprite_bg_outdoor[] = {0};
const static char sprite_bg_home[] = {0};
const static char sprite_bg_shore[] = {0};
const static char sprite_bg_office[] = {0};
const static char sprite_bg_studio[] = {0};
const static char sprite_bg_kitchen[] = {0};
const static char sprite_bg_parpour[] = {0};
const static char sprite_bg_drawing_room[] = {0};
const static char sprite_bg_castle[] = {0};

// Одежда
const static char sprite_cloth_work_jacket[] = {0};
const static char sprite_cloth_dress[] = {0};
const static char sprite_cloth_sailor_coat[] = {0};
const static char sprite_cloth_suit[] = {0};
const static char sprite_cloth_painted_shirt[] = {0};
const static char sprite_cloth_tshirt[] = {0};
const static char sprite_cloth_shawl[] = {0};
const static char sprite_cloth_engineer_jacket[] = {0};
const static char sprite_cloth_robe[] = {0};

// Лицо
const static char sprite_nose1[] = {0};
const static char sprite_nose2[] = {0};
const static char sprite_nose3[] = {0};
const static char sprite_mouth1[] = {0};
const static char sprite_mouth2[] = {0};
const static char sprite_mouth3[] = {0};
const static char sprite_eyes1[] = {0};
const static char sprite_eyes2[] = {0};
const static char sprite_eyes3[] = {0};
const static char sprite_hair1[] = {0};
const static char sprite_hair2[] = {0};
const static char sprite_hair3[] = {0};
