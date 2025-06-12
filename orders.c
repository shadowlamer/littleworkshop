#include "orders.h"

void generate_order(t_order *order) {
  order->furniture_scheme_id = random_upto(NUM_SCHEMES);
  order->furniture_scheme = (t_furniture_scheme*)furniture_schemes + order->furniture_scheme_id;
  generate_visitor_profile(&order->visitor, random_upto(NUM_CHARACTER_TYPES));
}

