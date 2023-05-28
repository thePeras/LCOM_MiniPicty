#pragma once

#include <lcom/lcf.h>
#include <stdint.h>
#include <stdbool.h>
#include "../controllers/uart.h"
#include "../../model/queue/queue.h"
#include "../../modules/game/player_drawer/player_drawer.h"
#include "../../model/position/position.h"
#include "../../model/button/button.h"
#include "../../model/state/state.h"

/**
 * @brief 
 * 
 */
int (ser_init)(uint16_t base_addr, uint32_t baud_rate, uint8_t word_length, uint8_t stop_bit, 
int8_t parity);
/**
 * @brief 
 * 
 */
void (delete_ser)();
/**
 * @brief 
 * 
 */
int (ser_subscribe_int)(uint8_t *bit_no);
/**
 * @brief 
 * 
 */
int (ser_unsubscribe_int)();
/**
 * @brief 
 * 
 */
void (ser_ih_fifo)();
/**
 * @brief 
 * 
 */
int (ser_read_from_fifo)();
/**
 * @brief 
 * 
 */
int (ser_write_to_fifo)();
/**
 * @brief 
 * 
 */
int (ser_write_char)(uint8_t c);
/**
 * @brief 
 * 
 */
int (ser_read_char)(uint8_t *c);
/**
 * @brief 
 * 
 */
int (ser_add_position_to_transmitter_queue)(drawing_position_t position);
/**
 * @brief 
 * 
 */
int (ser_add_button_click_to_transmitter_queue)(uint8_t index);
/**
 * @brief 
 * 
 */
int (ser_add_word_index)(uint8_t index);
/**
 * @brief 
 * 
 */
int (ser_add_won_round)();
/**
 * @brief 
 * 
 */
int (ser_read_bytes_from_receiver_queue)(player_drawer_t *drawer, state_t *app_state, bool *won_round);
