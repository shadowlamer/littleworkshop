#ifndef ORDERS_H
#define ORDERS_H

#include "visitor_defs.h"
#include "furniture_defs.h"
#include "tools.h"

typedef struct {
  t_visitor_profile visitor;
  t_furniture_scheme_id furniture_scheme_id;
  t_furniture_scheme *furniture_scheme;
} t_order;

void generate_order(t_order *order);

#endif // ORDERS_H
