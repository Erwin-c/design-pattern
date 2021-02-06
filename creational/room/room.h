/*
 * room.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_ROOM_ROOM_H_
#define CREATIONAL_ROOM_ROOM_H_

#include "creational/map_parts.h"
#include "creational/map_site.h"

class Room : public MapSite {
 public:
  Room(int n);
  virtual ~Room();

  virtual Room* Clone() const;

  int room_number() const;
  void set_side(Direction direction, MapSite* map_site);

  virtual void Enter();

 private:
  MapSite* sides_[4];
  int room_number_;
};

#endif  // CREATIONAL_ROOM_ROOM_H_
