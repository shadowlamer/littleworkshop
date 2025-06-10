// furniture_defs.c

#include "furniture_defs.h"

// Все доступные детали мебели
const t_part available_parts[NUM_PARTS] = {
  [PART_SIMPLE_WOODEN_LEG] = {
    .name = "простая деревянная ножка",
    .material = MAT_WOOD,
    .style = STYLE_SIMPLE,
    .type = PART_LEG
  },
  [PART_SIMPLE_WOODEN_BACK] = {
    .name = "простая деревянная спинка",
    .material = MAT_WOOD,
    .style = STYLE_SIMPLE,
    .type = PART_BACK
  },
  [PART_SIMPLE_WOODEN_SEAT] = {
    .name = "простое деревянное сидение",
    .material = MAT_WOOD,
    .style = STYLE_SIMPLE,
    .type = PART_SEAT
  },
  [PART_CUSHIONED_SEAT] = {
    .name = "мягкая подушка на сидение",
    .material = MAT_CUSHION,
    .style = STYLE_COMFORT,
    .type = PART_CUSHION
  },
  [PART_CUSHIONED_BACK] = {
    .name = "мягкая подушка на спинку",
    .material = MAT_CUSHION,
    .style = STYLE_COMFORT,
    .type = PART_CUSHION
  },
  [PART_UPHOLSTERED_BACK] = {
    .name = "спинка с обивкой",
    .material = MAT_FABRIC,
    .style = STYLE_COMFORT,
    .type = PART_UPHOLSTERY
  },
  [PART_UPHOLSTERED_SEAT] = {
    .name = "сидение с обивкой",
    .material = MAT_FABRIC,
    .style = STYLE_COMFORT,
    .type = PART_UPHOLSTERY
  },
  [PART_STURDY_WOODEN_LEG] = {
    .name = "прочная деревянная ножка",
    .material = MAT_HARD_WOOD,
    .style = STYLE_STURDY,
    .type = PART_LEG
  },
  [PART_STURDY_TOP_PLATE] = {
    .name = "верхняя плита",
    .material = MAT_HARD_WOOD,
    .style = STYLE_STURDY,
    .type = PART_TOP_PLATE
  },
  [PART_OFFICE_WOODEN_LEG] = {
    .name = "деревянная ножка офисного стула",
    .material = MAT_WOOD,
    .style = STYLE_OFFICE,
    .type = PART_LEG
  },
  [PART_OFFICE_HARD_SEAT] = {
    .name = "твердое сидение офисного стула",
    .material = MAT_WOOD,
    .style = STYLE_OFFICE,
    .type = PART_SEAT
  },
  [PART_OFFICE_HARD_BACK] = {
    .name = "твердая спинка офисного стула",
    .material = MAT_WOOD,
    .style = STYLE_OFFICE,
    .type = PART_BACK
  },
  [PART_OFFICE_CUSHION_SEAT] = {
    .name = "мягкое сидение офисного стула",
    .material = MAT_CUSHION,
    .style = STYLE_OFFICE,
    .type = PART_CUSHION
  },
  [PART_OFFICE_CUSHION_BACK] = {
    .name = "мягкая спинка офисного стула",
    .material = MAT_CUSHION,
    .style = STYLE_OFFICE,
    .type = PART_CUSHION
  },
  [PART_OFFICE_UPHOLSTERY] = {
    .name = "обивка офисного стула",
    .material = MAT_FABRIC,
    .style = STYLE_OFFICE,
    .type = PART_UPHOLSTERY
  },
  [PART_ARTISTIC_FRAME_LEFT] = {
    .name = "левая сторона рамы резной кровати",
    .material = MAT_FRAME,
    .style = STYLE_ARTISTIC,
    .type = PART_FRAME
  },
  [PART_ARTISTIC_FRAME_RIGHT] = {
    .name = "правая сторона рамы резной кровати",
    .material = MAT_FRAME,
    .style = STYLE_ARTISTIC,
    .type = PART_FRAME
  },
  [PART_ARTISTIC_HEADBOARD] = {
    .name = "изголовье резной кровати",
    .material = MAT_DECORATIVE_WOOD,
    .style = STYLE_ARTISTIC,
    .type = PART_HEADBOARD
  },
  [PART_ARTISTIC_FOOTBOARD] = {
    .name = "изножье резной кровати",
    .material = MAT_DECORATIVE_WOOD,
    .style = STYLE_ARTISTIC,
    .type = PART_FOOTBOARD
  },
  [PART_ARTISTIC_BASE_BOARD] = {
    .name = "основание резной кровати",
    .material = MAT_BOARD,
    .style = STYLE_ARTISTIC,
    .type = PART_BOARD
  },
  [PART_ARTISTIC_CARVED_DECORATION] = {
    .name = "резное украшение",
    .material = MAT_CARVED_DETAIL,
    .style = STYLE_ARTISTIC,
    .type = PART_CARVED_DETAIL
  },
  [PART_CHILD_LEG] = {
    .name = "ножка детского стульчика",
    .material = MAT_WOOD,
    .style = STYLE_CHILD_FRIENDLY,
    .type = PART_LEG
  },
  [PART_CHILD_SEAT] = {
    .name = "сидение детского стульчика",
    .material = MAT_WOOD,
    .style = STYLE_CHILD_FRIENDLY,
    .type = PART_SEAT
  },
  [PART_CHILD_BACK] = {
    .name = "спинка детского стульчика",
    .material = MAT_WOOD,
    .style = STYLE_CHILD_FRIENDLY,
    .type = PART_BACK
  },
  [PART_CHILD_CORNER_GUARD] = {
    .name = "защитный уголок",
    .material = MAT_CORNER_GUARD,
    .style = STYLE_CHILD_FRIENDLY,
    .type = PART_CORNER_GUARD
  },
  [PART_ELEGANT_LEG] = {
    .name = "ножка элегантного стула",
    .material = MAT_WOOD,
    .style = STYLE_ELEGANT,
    .type = PART_LEG
  },
  [PART_ELEGANT_SEAT] = {
    .name = "сидение элегантного стула",
    .material = MAT_WOOD,
    .style = STYLE_ELEGANT,
    .type = PART_SEAT
  },
  [PART_ELEGANT_BACK] = {
    .name = "спинка элегантного стула",
    .material = MAT_WOOD,
    .style = STYLE_ELEGANT,
    .type = PART_BACK
  },
  [PART_ELEGANT_ARMREST] = {
    .name = "подлокотник элегантного стула",
    .material = MAT_ARMREST,
    .style = STYLE_ELEGANT,
    .type = PART_ARMREST
  },
  [PART_MAGIC_LEG] = {
    .name = "ножка магической скамьи",
    .material = MAT_WOOD,
    .style = STYLE_MAGIC,
    .type = PART_LEG
  },
  [PART_MAGIC_SEAT] = {
    .name = "сидение магической скамьи",
    .material = MAT_WOOD,
    .style = STYLE_MAGIC,
    .type = PART_SEAT
  },
  [PART_MAGIC_BACK] = {
    .name = "спинка магической скамьи",
    .material = MAT_WOOD,
    .style = STYLE_MAGIC,
    .type = PART_BACK
  },
  [PART_MAGIC_CARVED_DETAIL] = {
    .name = "резная деталь магической скамьи",
    .material = MAT_CARVED_DETAIL,
    .style = STYLE_MAGIC,
    .type = PART_CARVED_DETAIL
  },
  [PART_CAT_FLOOR] = {
    .name = "пол домика для кота",
    .material = MAT_WOOD,
    .style = STYLE_CAT_FRIENDLY,
    .type = PART_BOARD
  },
  [PART_CAT_WALL_LEFT] = {
    .name = "левая стенка домика для кота",
    .material = MAT_WOOD,
    .style = STYLE_CAT_FRIENDLY,
    .type = PART_FRAME
  },
  [PART_CAT_WALL_RIGHT] = {
    .name = "правая стенка домика для кота",
    .material = MAT_WOOD,
    .style = STYLE_CAT_FRIENDLY,
    .type = PART_FRAME
  },
  [PART_CAT_WALL_BACK] = {
    .name = "задняя стенка домика для кота",
    .material = MAT_WOOD,
    .style = STYLE_CAT_FRIENDLY,
    .type = PART_FRAME
  },
  [PART_CAT_ROOF] = {
    .name = "крыша домика для кота",
    .material = MAT_WOOD,
    .style = STYLE_CAT_FRIENDLY,
    .type = PART_TOP_PLATE
  },
  [PART_CAT_WINDOW] = {
    .name = "окно домика для кота",
    .material = MAT_WINDOW,
    .style = STYLE_CAT_FRIENDLY,
    .type = PART_WINDOW
  },
  [PART_CANOPIED_FRAME_LEFT] = {
    .name = "левый каркас кровати с балдахином",
    .material = MAT_FRAME,
    .style = STYLE_ELEGANT,
    .type = PART_FRAME
  },
  [PART_CANOPIED_FRAME_RIGHT] = {
    .name = "правый каркас кровати с балдахином",
    .material = MAT_FRAME,
    .style = STYLE_ELEGANT,
    .type = PART_FRAME
  },
  [PART_CANOPIED_HEADBOARD] = {
    .name = "изголовье кровати с балдахином",
    .material = MAT_DECORATIVE_WOOD,
    .style = STYLE_ELEGANT,
    .type = PART_HEADBOARD
  },
  [PART_CANOPIED_FOOTBOARD] = {
    .name = "изножье кровати с балдахином",
    .material = MAT_DECORATIVE_WOOD,
    .style = STYLE_ELEGANT,
    .type = PART_FOOTBOARD
  },
  [PART_CANOPIED_BASE_BOARD] = {
    .name = "основание кровати с балдахином",
    .material = MAT_BOARD,
    .style = STYLE_ELEGANT,
    .type = PART_BOARD
  },
  [PART_CANOPIED_VERTICAL_SUPPORT] = {
    .name = "вертикальная опора балдахина",
    .material = MAT_SUPPORT,
    .style = STYLE_ELEGANT,
    .type = PART_SUPPORT
  },
  [PART_CANOPIED_CANOPY] = {
    .name = "балдахин",
    .material = MAT_CANOPY_FABRIC,
    .style = STYLE_ELEGANT,
    .type = PART_CANOPY
  }
};