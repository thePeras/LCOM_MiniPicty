#pragma once

#include <lcom/lcf.h>

struct brush{
  uint16_t color;
  uint16_t size;
};
typedef struct brush brush_t;
/*
TODO:
- Funções para aumentar/diminuir o tamanho do brush
- Função para mudar de cor do brush
*/
// int (brush_increase_size)(brush_t *brush);
// int (brush_decrease_size)(brush_t *brush);