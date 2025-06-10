// furniture_defs.h
#ifndef FURNITURE_DEFS_H
#define FURNITURE_DEFS_H

#include <stdint.h>
#include "sprites_defs.h"

// Типы материалов, которые используются для изготовления мебели
typedef enum {
  MAT_WOOD,               // Обычное дерево
  MAT_HARD_WOOD,          // Прочное дерево
  MAT_DECORATIVE_WOOD,    // Декоративное дерево
  MAT_CUSHION,            // Мягкая подушка
  MAT_FABRIC,             // Ткань (обивка)
  MAT_NAILS,              // Гвозди
  MAT_SCREWS,             // Шурупы
  MAT_LACQUER,            // Лак
  MAT_FILLING,            // Наполнитель (для мягкой мебели)
  MAT_CORNER_GUARD,       // Защитный уголок (для детской мебели)
  MAT_CARVED_DETAIL,      // Резная деталь (для художественной отделки)
  MAT_CANOPY_FABRIC,      // Ткань для балдахина
  MAT_FRAME,              // Каркас (для кроватей)
  MAT_BOARD,              // Доска
  MAT_WINDOW,             // Окно (для домика для кота)
  MAT_ARMREST,            // Подлокотник
  MAT_SUPPORT,            // Вертикальная опора (для кровати с балдахином)
  MAT_TOP_PLATE,          // Верхняя плита (для табурета)
  MAT_MATTRESS,           // Матрас (по желанию)
  NUM_MATERIAL_TYPES      // Количество типов материалов
} t_material;

// Стили мебели
typedef enum {
  STYLE_SIMPLE,            // Простой стиль (для базовой мебели)
  STYLE_COMFORT,           // Удобный стиль (с мягкими элементами)
  STYLE_STURDY,            // Прочный стиль (для устойчивой мебели)
  STYLE_OFFICE,            // Офисный стиль (строгий, формальный)
  STYLE_ARTISTIC,          // Художественный стиль (резные детали)
  STYLE_CHILD_FRIENDLY,    // Детский стиль (безопасный, яркий)
  STYLE_ELEGANT,           // Элегантный стиль (со спинкой и подлокотниками)
  STYLE_MAGIC,             // Магический стиль (с резными узорами)
  STYLE_CAT_FRIENDLY,      // Для кошки (компактный, с окном)
  STYLE_NUM_TYPES          // Количество стилей
} t_furniture_style;

// Типы частей мебели
typedef enum {
  PART_LEG,                // Ножка
  PART_SEAT,               // Сидение
  PART_BACK,               // Спинка
  PART_CUSHION,            // Мягкая подушка
  PART_UPHOLSTERY,         // Обивка
  PART_FRAME,              // Каркас
  PART_BOARD,              // Доска
  PART_TOP_PLATE,          // Верхняя плита (для табурета)
  PART_ARMREST,            // Подлокотник
  PART_HEADBOARD,          // Изголовье (для кровати)
  PART_FOOTBOARD,          // Изножье (для кровати)
  PART_CANOPY,             // Балдахин
  PART_CORNER_GUARD,       // Защитный уголок
  PART_CARVED_DETAIL,      // Резная деталь
  PART_WINDOW,             // Окно
  PART_SUPPORT,            // Вертикальная опора
  PART_MATTRESS,           // Матрас
  PART_NUM_TYPES           // Общее количество типов частей
} t_part_type;

// Структура описания одной части мебели
typedef struct {
  const char *name;         // Название детали (на русском)
  t_material material;      // Требуемый материал
  t_furniture_style style;  // Стиль мебели, в котором используется эта часть
  t_part_type type;         // Тип детали
  t_sprite_id sprite;
} t_part;

// ID всех доступных деталей (индекс для массива available_parts)
typedef enum {
  PART_SIMPLE_WOODEN_LEG,
  PART_SIMPLE_WOODEN_BACK,
  PART_SIMPLE_WOODEN_SEAT,

  PART_CUSHIONED_SEAT,
  PART_CUSHIONED_BACK,
  PART_UPHOLSTERED_BACK,
  PART_UPHOLSTERED_SEAT,

  PART_STURDY_WOODEN_LEG,
  PART_STURDY_TOP_PLATE,

  PART_OFFICE_WOODEN_LEG,
  PART_OFFICE_HARD_SEAT,
  PART_OFFICE_HARD_BACK,
  PART_OFFICE_CUSHION_SEAT,
  PART_OFFICE_CUSHION_BACK,
  PART_OFFICE_UPHOLSTERY,

  PART_ARTISTIC_FRAME_LEFT,
  PART_ARTISTIC_FRAME_RIGHT,
  PART_ARTISTIC_HEADBOARD,
  PART_ARTISTIC_FOOTBOARD,
  PART_ARTISTIC_BASE_BOARD,
  PART_ARTISTIC_CARVED_DECORATION,

  PART_CHILD_LEG,
  PART_CHILD_SEAT,
  PART_CHILD_BACK,
  PART_CHILD_CORNER_GUARD,

  PART_ELEGANT_LEG,
  PART_ELEGANT_SEAT,
  PART_ELEGANT_BACK,
  PART_ELEGANT_ARMREST,

  PART_MAGIC_LEG,
  PART_MAGIC_SEAT,
  PART_MAGIC_BACK,
  PART_MAGIC_CARVED_DETAIL,

  PART_CAT_FLOOR,
  PART_CAT_WALL_LEFT,
  PART_CAT_WALL_RIGHT,
  PART_CAT_WALL_BACK,
  PART_CAT_ROOF,
  PART_CAT_WINDOW,

  PART_CANOPIED_FRAME_LEFT,
  PART_CANOPIED_FRAME_RIGHT,
  PART_CANOPIED_HEADBOARD,
  PART_CANOPIED_FOOTBOARD,
  PART_CANOPIED_BASE_BOARD,
  PART_CANOPIED_VERTICAL_SUPPORT,
  PART_CANOPIED_CANOPY,

  NUM_PARTS                 // Общее количество деталей
} t_part_id;

// Элемент схемы сборки — деталь и её позиция
typedef struct {
  t_part_id part_id;        // ID детали из перечисления t_part_id
  uint8_t x;                // Позиция по горизонтали (в пикселях или относительно)
  uint8_t y;                // Позиция по вертикали
} t_assembly_part;

// Схема изделия
typedef struct {
  const char *name;                   // Название изделия
  t_furniture_style style;            // Стиль мебели
  uint8_t required_parts_count;       // Количество требуемых деталей
  const t_assembly_part *parts;       // Указатель на массив деталей
} t_furniture_scheme;

// ID схем изделий
typedef enum {
  SCHEME_SIMPLE_CHAIR,                // Простой деревянный стул
  SCHEME_CUSHIONED_CHAIR,             // Стул с мягким сидением и обивкой
  SCHEME_STURDY_STOOL,                // Прочный деревянный табурет
  SCHEME_OFFICE_CHAIR,                // Классический офисный стул
  SCHEME_ARTISTIC_BED,                // Резная кровать
  SCHEME_CHILD_CHAIR,                 // Детский стульчик
  SCHEME_ELEGANT_ARMCHAIR,            // Стул с подлокотниками
  SCHEME_MAGIC_BENCH,                 // Магическая скамья
  SCHEME_CAT_HOUSE,                   // Домик для кота
  SCHEME_CANOPIED_BED,                // Кровать с балдахином
  NUM_SCHEMES                         // Общее количество схем
} t_furniture_scheme_id;

extern const t_furniture_scheme furniture_schemes[NUM_SCHEMES];

#endif // FURNITURE_DEFS_H
