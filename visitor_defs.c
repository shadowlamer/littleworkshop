#include "visitor_defs.h"

#define NUM_CATCH_PHRASES_PER_CHARACTER 3
#define NUM_ACCESSOIRES 3

// Имена персонажей
const static const char *character_titles[NUM_CHARACTER_TYPES] = {
  [CHARACTER_FARMER] = "Фермер",
  [CHARACTER_GIRL] = "Молодая девушка",
  [CHARACTER_FISHERMAN] = "Старик-рыбак",
  [CHARACTER_BUSINESSMAN] = "Бизнесмен",
  [CHARACTER_ARTIST] = "Художник",
  [CHARACTER_MOM] = "Мама с ребёнком",
  [CHARACTER_OLD_LADY] = "Пожилая женщина",
  [CHARACTER_ARCHITECT] = "Архитектор",
  [CHARACTER_WIZARD] = "Старый чародей"
};

// Фразы для каждого типа персонажа
static const char *catch_phrases[NUM_CHARACTER_TYPES][NUM_CATCH_PHRASES_PER_CHARACTER] = {
  [CHARACTER_FARMER] = {
    "Дайте что-то прочное.",
    "Главное — чтобы держалось!",
    "Не люблю красоту, только дерево."
  },
  [CHARACTER_GIRL] = {
    "Цвет должен быть красивым!",
    "Это должно быть удобным.",
    "Хочу, чтобы всё было стильно!"
  },
  [CHARACTER_FISHERMAN] = {
    "Лопни моя селезёнка!",
    "Нужна крепкая вещь, как лодка.",
    "Чтобы не сломалась на берегу."
  },
  [CHARACTER_BUSINESSMAN] = {
    "Время дорого!",
    "Всё должно быть идеально.",
    "Это подарок — внешний вид важен."
  },
  [CHARACTER_ARTIST] = {
    "Художественная ценность выше всего.",
    "Резные детали — это важно.",
    "Красиво, но не слишком вычурно."
  },
  [CHARACTER_MOM] = {
    "Без острых углов!",
    "С безопасными краями.",
    "Прочный, но уютный."
  },
  [CHARACTER_OLD_LADY] = {
    "У меня плохие ноги, нужно сидеть.",
    "Дайте что-нибудь старое, проверенное.",
    "Очень медленно хожу, но быстро думаю."
  },
  [CHARACTER_ARCHITECT] = {
    "Стиль важнее цены.",
    "Я разбираюсь в формах.",
    "Дизайн должен быть идеальным."
  },
  [CHARACTER_WIZARD] = {
    "Магия в деталях...",
    "Если ты сделаешь это правильно, получишь награду.",
    "Это не просто мебель..."
  }
};

// Части портрета (спрайты)
const static t_sprite_id character_portraits[NUM_CHARACTER_TYPES] = {
  [CHARACTER_FARMER] = SPRITE_PORTRAIT_FARMER,
  [CHARACTER_GIRL] = SPRITE_PORTRAIT_GIRL,
  [CHARACTER_FISHERMAN] = SPRITE_PORTRAIT_FISHERMAN,
  [CHARACTER_BUSINESSMAN] = SPRITE_PORTRAIT_BUSINESSMAN,
  [CHARACTER_ARTIST] = SPRITE_PORTRAIT_ARTIST,
  [CHARACTER_MOM] = SPRITE_PORTRAIT_MOM,
  [CHARACTER_OLD_LADY] = SPRITE_PORTRAIT_OLD_LADY,
  [CHARACTER_ARCHITECT] = SPRITE_PORTRAIT_ARCHITECT,
  [CHARACTER_WIZARD] = SPRITE_PORTRAIT_WIZARD
};

// Генератор случайного числа (простой)
uint8_t random_upto(uint8_t max) {
    static uint8_t seed = 0xAB;
    seed = (seed * 0x19) + 0x3D;
    return seed % max;
}

void generate_visitor_profile(t_visitor_profile *p_profile,t_character_type character_type) {
  p_profile->type = character_type;
  p_profile->name = (char *)character_titles[character_type];
  p_profile->catch_phrase = (char *)catch_phrases[character_type][random_upto(NUM_CATCH_PHRASES_PER_CHARACTER)];
  p_profile->portrait = character_portraits[character_type];
}
