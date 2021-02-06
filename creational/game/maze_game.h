/*
 * maze_game.h
 *
 *  Created on: Feb 1, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_GAME_MAZE_GAME_H
#define CREATIONAL_GAME_MAZE_GAME_H

#include "creational/door/door.h"
#include "creational/maze.h"
#include "creational/room/room.h"
#include "creational/wall/wall.h"

class MazeGame {
 public:
  MazeGame();
  ~MazeGame();

  Maze* CreateMaze();
};

#endif /* CREATIONAL_GAME_MAZE_GAME_H */
