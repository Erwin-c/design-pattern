/*
 * maze.h
 *
 *  Created on: Jan 18, 2021
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_MAZE_H_
#define ABSTRACT_FACTORY_MAZE_H_

#include <vector>

#include "room.h"

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

#endif  // ABSTRACT_FACTORY_MAZE_H_
