/*
 * maze_game.cc
 *
 *  Created on: Feb 1, 2021
 *      Author: Erwin
 */

#include "creational/maze_game.h"

#include <iostream>

#include "creational/maze.h"

MazeGame::MazeGame() { std::cout << "MazeGame::MazeGame()" << std::endl; }

MazeGame::~MazeGame() { std::cout << "MazeGame::~MazeGame()" << std::endl; }

Maze* MazeGame::CreateMaze() {
  std::cout << "MazeGame::CreateMaze()" << std::endl;

  Maze* maze = new Maze();

  Room* r1 = new Room(1);
  Room* r2 = new Room(2);
  Door* door = new Door(r1, r2);

  maze->AddRoom(r1);
  maze->AddRoom(r2);

  r1->set_side(kNorth, new Wall());
  r1->set_side(kEast, door);
  r1->set_side(kSouth, new Wall());
  r1->set_side(kWest, new Wall());

  r2->set_side(kNorth, new Wall());
  r2->set_side(kEast, new Wall());
  r2->set_side(kSouth, new Wall());
  r2->set_side(kWest, door);

  return maze;
}
