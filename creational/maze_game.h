/*
 * maze_game.h
 *
 *  Created on: Feb 1, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_MAZE_GAME_H
#define CREATIONAL_MAZE_GAME_H

#include "creational/door.h"
#include "creational/maze.h"
#include "creational/room.h"
#include "creational/wall.h"

class MazeGame {
 public:
  MazeGame();
  ~MazeGame();

  Maze* CreateMaze();
};

#endif /* CREATIONAL_MAZE_GAME_H */
