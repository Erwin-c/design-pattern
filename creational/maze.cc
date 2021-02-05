/*
 * maze.cc
 *
 *  Created on: Jan 18, 2021
 *      Author: Erwin
 */

#include "creational/maze.h"

#include <iostream>
#include <vector>

Maze::Maze() : m_room_vec_(new std::vector<Room*>) {
  std::cout << "Maze::Maze()" << std::endl;
}

Maze::~Maze() { std::cout << "Maze::~Maze()" << std::endl; }

Maze* Maze::Clone() const { return new Maze(*this); }

Room* Maze::RoomNo(int n) const {
  std::vector<Room*>::const_iterator it = m_room_vec_->begin();
  for (; it != m_room_vec_->end(); it++) {
    if ((*it)->room_number() == n) {
      return (*it);
      break;
    }
  }

  return 0;
}

void Maze::AddRoom(Room* room) { m_room_vec_->push_back(room); }
