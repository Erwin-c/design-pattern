/*
 * maze.h
 *
 *  Created on: Jan 18, 2021
 *      Author: Erwin
 */

#ifndef BEHAVIORAL_MAZE_H_
#define BEHAVIORAL_MAZE_H_

#include <vector>

#include "behavioral/room.h"

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

#endif  // BEHAVIORAL_MAZE_H_
