// furniture_defs.c

#include "furniture_defs.h"

// Все доступные детали мебели
const t_part available_parts[NUM_PARTS] = {
  [PART_SIMPLE_WOODEN_LEG] = {
    .name = "простая деревянная ножка",
    .material = MAT_WOOD,
    .style = STYLE_SIMPLE,
    .type = PART_LEG,
    .sprite = SPRITE_SIMPLE_WOODEN_LEG  
  },
  [PART_SIMPLE_WOODEN_BACK] = {
    .name = "простая деревянная спинка",
    .material = MAT_WOOD,
    .style = STYLE_SIMPLE,
    .type = PART_BACK,
    .sprite = SPRITE_SIMPLE_WOODEN_BACK  
  },
  [PART_SIMPLE_WOODEN_SEAT] = {
    .name = "простое деревянное сидение",
    .material = MAT_WOOD,
    .style = STYLE_SIMPLE,
    .type = PART_SEAT,
    .sprite = SPRITE_SIMPLE_WOODEN_SEAT  
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

// Определим детали для каждой схемы

// Простой деревянный стул (4 ножки, сидение, спинка)
const t_assembly_part simple_chair_parts[] = {
  { .part_id = PART_SIMPLE_WOODEN_LEG,    .x = 8, .y = 35 },
  { .part_id = PART_SIMPLE_WOODEN_LEG,    .x = 18, .y = 35 },
  { .part_id = PART_SIMPLE_WOODEN_LEG,    .x = 4, .y = 40 },
  { .part_id = PART_SIMPLE_WOODEN_LEG,    .x = 15, .y = 40 },
  { .part_id = PART_SIMPLE_WOODEN_SEAT,   .x = 2, .y = 24 },
  { .part_id = PART_SIMPLE_WOODEN_BACK,   .x = 8, .y = 00 }
};

// Стул с мягким сидением и обивкой (4 ножки, твёрдое сидение, мягкая подушка, твёрдая спинка, мягкая подушка)
const t_assembly_part cushioned_chair_parts[] = {
  { .part_id = PART_OFFICE_WOODEN_LEG,        .x = 10, .y = 100 },
  { .part_id = PART_OFFICE_WOODEN_LEG,        .x = 30, .y = 100 },
  { .part_id = PART_OFFICE_WOODEN_LEG,        .x = 10, .y = 120 },
  { .part_id = PART_OFFICE_WOODEN_LEG,        .x = 30, .y = 120 },
  { .part_id = PART_OFFICE_HARD_SEAT,         .x = 20, .y = 90 },
  { .part_id = PART_OFFICE_CUSHION_SEAT,      .x = 20, .y = 90 },
  { .part_id = PART_OFFICE_HARD_BACK,         .x = 20, .y = 70 },
  { .part_id = PART_OFFICE_CUSHION_BACK,      .x = 20, .y = 70 }
};

// Прочный деревянный табурет (4 ножки, верхняя плита)
const t_assembly_part sturdy_stool_parts[] = {
  { .part_id = PART_STURDY_WOODEN_LEG,    .x = 10, .y = 100 },
  { .part_id = PART_STURDY_WOODEN_LEG,    .x = 30, .y = 100 },
  { .part_id = PART_STURDY_WOODEN_LEG,    .x = 10, .y = 120 },
  { .part_id = PART_STURDY_WOODEN_LEG,    .x = 30, .y = 120 },
  { .part_id = PART_STURDY_TOP_PLATE,     .x = 20, .y = 90 }
};

// Классический офисный стул (на 4 стула: по 9 частей каждый — но здесь один экземпляр)
const static t_assembly_part office_chair_parts[] = {
  { .part_id = PART_OFFICE_WOODEN_LEG,       .x = 10, .y = 100 },
  { .part_id = PART_OFFICE_WOODEN_LEG,       .x = 30, .y = 100 },
  { .part_id = PART_OFFICE_WOODEN_LEG,       .x = 10, .y = 120 },
  { .part_id = PART_OFFICE_WOODEN_LEG,       .x = 30, .y = 120 },
  { .part_id = PART_OFFICE_HARD_SEAT,        .x = 20, .y = 90 },
  { .part_id = PART_OFFICE_CUSHION_SEAT,     .x = 20, .y = 90 },
  { .part_id = PART_OFFICE_HARD_BACK,        .x = 20, .y = 70 },
  { .part_id = PART_OFFICE_CUSHION_BACK,     .x = 20, .y = 70 },
  { .part_id = PART_OFFICE_UPHOLSTERY,       .x = 20, .y = 70 }
};

// Резная кровать (каркас слева/справа, изголовье, изножье, основание, резные украшения)
const static t_assembly_part artistic_bed_parts[] = {
  { .part_id = PART_ARTISTIC_FRAME_LEFT,        .x = 10, .y = 50 },
  { .part_id = PART_ARTISTIC_FRAME_RIGHT,       .x = 150, .y = 50 },
  { .part_id = PART_ARTISTIC_HEADBOARD,         .x = 80, .y = 30 },
  { .part_id = PART_ARTISTIC_FOOTBOARD,         .x = 80, .y = 150 },
  { .part_id = PART_ARTISTIC_BASE_BOARD,        .x = 80, .y = 100 },
  { .part_id = PART_ARTISTIC_CARVED_DECORATION, .x = 60, .y = 40 },
  { .part_id = PART_ARTISTIC_CARVED_DECORATION, .x = 100, .y = 40 },
  { .part_id = PART_ARTISTIC_CARVED_DECORATION, .x = 60, .y = 140 },
  { .part_id = PART_ARTISTIC_CARVED_DECORATION, .x = 100, .y = 140 }
};

// Детский стульчик (4 ножки, сиденье, спинка, защитные уголки)
const static t_assembly_part child_chair_parts[] = {
  { .part_id = PART_CHILD_LEG,           .x = 10, .y = 100 },
  { .part_id = PART_CHILD_LEG,           .x = 30, .y = 100 },
  { .part_id = PART_CHILD_LEG,           .x = 10, .y = 120 },
  { .part_id = PART_CHILD_LEG,           .x = 30, .y = 120 },
  { .part_id = PART_CHILD_SEAT,          .x = 20, .y = 90 },
  { .part_id = PART_CHILD_BACK,          .x = 20, .y = 70 },
  { .part_id = PART_CHILD_CORNER_GUARD,  .x = 10, .y = 90 },
  { .part_id = PART_CHILD_CORNER_GUARD,  .x = 30, .y = 90 },
  { .part_id = PART_CHILD_CORNER_GUARD,  .x = 10, .y = 120 },
  { .part_id = PART_CHILD_CORNER_GUARD,  .x = 30, .y = 120 }
};

// Стул с подлокотниками (4 ножки, сиденье, спинка, подлокотники)
const static t_assembly_part elegant_armchair_parts[] = {
  { .part_id = PART_ELEGANT_LEG,         .x = 10, .y = 100 },
  { .part_id = PART_ELEGANT_LEG,         .x = 30, .y = 100 },
  { .part_id = PART_ELEGANT_LEG,         .x = 10, .y = 120 },
  { .part_id = PART_ELEGANT_LEG,         .x = 30, .y = 120 },
  { .part_id = PART_ELEGANT_SEAT,        .x = 20, .y = 90 },
  { .part_id = PART_ELEGANT_BACK,        .x = 20, .y = 70 },
  { .part_id = PART_ELEGANT_ARMREST,     .x = 10, .y = 90 },
  { .part_id = PART_ELEGANT_ARMREST,     .x = 30, .y = 90 }
};

// Магическая скамья (2 ножки, сиденье, спинка, резные детали)
const static t_assembly_part magic_bench_parts[] = {
  { .part_id = PART_MAGIC_LEG,             .x = 10, .y = 100 },
  { .part_id = PART_MAGIC_LEG,             .x = 30, .y = 120 },
  { .part_id = PART_MAGIC_SEAT,            .x = 20, .y = 110 },
  { .part_id = PART_MAGIC_BACK,            .x = 20, .y = 90 },
  { .part_id = PART_MAGIC_CARVED_DETAIL,   .x = 15, .y = 100 },
  { .part_id = PART_MAGIC_CARVED_DETAIL,   .x = 25, .y = 100 },
  { .part_id = PART_MAGIC_CARVED_DETAIL,   .x = 15, .y = 120 },
  { .part_id = PART_MAGIC_CARVED_DETAIL,   .x = 25, .y = 120 }
};

// Домик для кота (пол, стенки, крыша, окно)
const static t_assembly_part cat_house_parts[] = {
  { .part_id = PART_CAT_FLOOR,           .x = 20, .y = 100 },
  { .part_id = PART_CAT_WALL_LEFT,       .x = 20, .y = 80 },
  { .part_id = PART_CAT_WALL_RIGHT,      .x = 20, .y = 120 },
  { .part_id = PART_CAT_WALL_BACK,       .x = 20, .y = 60 },
  { .part_id = PART_CAT_ROOF,            .x = 20, .y = 50 },
  { .part_id = PART_CAT_WINDOW,          .x = 20, .y = 90 }
};

// Кровать с балдахином (каркасы, доски, опоры, балдахин)
const static t_assembly_part canopied_bed_parts[] = {
  { .part_id = PART_CANOPIED_FRAME_LEFT,        .x = 10, .y = 50 },
  { .part_id = PART_CANOPIED_FRAME_RIGHT,       .x = 150, .y = 50 },
  { .part_id = PART_CANOPIED_HEADBOARD,         .x = 80, .y = 30 },
  { .part_id = PART_CANOPIED_FOOTBOARD,         .x = 80, .y = 150 },
  { .part_id = PART_CANOPIED_BASE_BOARD,        .x = 80, .y = 100 },
  { .part_id = PART_CANOPIED_VERTICAL_SUPPORT,  .x = 40, .y = 60 },
  { .part_id = PART_CANOPIED_VERTICAL_SUPPORT,  .x = 60, .y = 60 },
  { .part_id = PART_CANOPIED_VERTICAL_SUPPORT,  .x = 100, .y = 60 },
  { .part_id = PART_CANOPIED_VERTICAL_SUPPORT,  .x = 120, .y = 60 },
  { .part_id = PART_CANOPIED_CANOPY,           .x = 80, .y = 20 }
};

// Описание всех схем изделий
const t_furniture_scheme furniture_schemes[NUM_SCHEMES] = {
  [SCHEME_SIMPLE_CHAIR] = {
    .name = "Простой деревянный стул",
    .style = STYLE_SIMPLE,
    .required_parts_count = 6,
    .parts = simple_chair_parts
  },
  [SCHEME_CUSHIONED_CHAIR] = {
    .name = "Стул с мягким сидением и обивкой",
    .style = STYLE_COMFORT,
    .required_parts_count = 8,
    .parts = cushioned_chair_parts
  },
  [SCHEME_STURDY_STOOL] = {
    .name = "Прочный деревянный табурет",
    .style = STYLE_STURDY,
    .required_parts_count = 5,
    .parts = sturdy_stool_parts
  },
  [SCHEME_OFFICE_CHAIR] = {
    .name = "Классический офисный стул",
    .style = STYLE_OFFICE,
    .required_parts_count = 9,
    .parts = office_chair_parts
  },
  [SCHEME_ARTISTIC_BED] = {
    .name = "Резная кровать",
    .style = STYLE_ARTISTIC,
    .required_parts_count = 9,
    .parts = artistic_bed_parts
  },
  [SCHEME_CHILD_CHAIR] = {
    .name = "Детский стульчик",
    .style = STYLE_CHILD_FRIENDLY,
    .required_parts_count = 10,
    .parts = child_chair_parts
  },
  [SCHEME_ELEGANT_ARMCHAIR] = {
    .name = "Стул с подлокотниками",
    .style = STYLE_ELEGANT,
    .required_parts_count = 8,
    .parts = elegant_armchair_parts
  },
  [SCHEME_MAGIC_BENCH] = {
    .name = "Магическая скамья",
    .style = STYLE_MAGIC,
    .required_parts_count = 8,
    .parts = magic_bench_parts
  },
  [SCHEME_CAT_HOUSE] = {
    .name = "Домик для кота",
    .style = STYLE_CAT_FRIENDLY,
    .required_parts_count = 6,
    .parts = cat_house_parts
  },
  [SCHEME_CANOPIED_BED] = {
    .name = "Кровать с балдахином",
    .style = STYLE_ELEGANT,
    .required_parts_count = 10,
    .parts = canopied_bed_parts
  }
};
