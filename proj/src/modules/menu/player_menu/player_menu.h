#pragma once
#include "../../../model/player/player.h"

/**
 * @brief Player Menu struct
 * Contains a player
 * 
 */
typedef struct PlayerMenu {
  player_t *player;
} player_menu_t;

/**
 * @brief Create a new Player Menu
 * 
 * @return player_menu_t* 
 */
player_menu_t *(create_player_menu)();

/**
 * @brief Destroy a Player Menu
 * 
 * @param player_menu 
 */
void (destroy_player_menu)(player_menu_t * player_menu);

/**
 * @brief Get the Player object
 * 
 * @param player_menu
 * @return reference to the player
 */
player_t *(player_menu_get_player)(player_menu_t * player_menu);
