/*
 * maze.h
 *
 *  Created on: Jan 18, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_MAZE_H_
#define CREATIONAL_MAZE_H_

#include <vector>

#include "creational/room.h"

class Maze {
  public:
  Maze();
  virtual ~Maze();

  virtual Maze* Clone() const;

  Room* RoomNo(int n) const;
  void AddRoom(Room* room);

 private:
  std::vector<Room*>* m_room_vec_;
};

#endif  // CREATIONAL_MAZE_H_
