/*
 * maze_game.h
 *
 *  Created on: Feb 1, 2021
 *      Author: Erwin
 */

#ifndef BEHAVIORAL_MAZE_GAME_H
#define BEHAVIORAL_MAZE_GAME_H

#include "behavioral/door.h"
#include "behavioral/maze.h"
#include "behavioral/room.h"
#include "behavioral/wall.h"

class MazeGame {
 public:
  MazeGame();
  ~MazeGame();

  Maze* CreateMaze();
};

#endif /* BEHAVIORAL_MAZE_GAME_H */
