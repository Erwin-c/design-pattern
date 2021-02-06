/*
 * main.cc
 *
 *  Created on: Jan 24, 2021
 *      Author: Erwin
 */

#include "creational/game/maze_game.h"

int main() {
  // code here
  MazeGame* game = new MazeGame();
  Maze* maze = game->CreateMaze();

  delete maze;
  delete game;

  return 0;
}
