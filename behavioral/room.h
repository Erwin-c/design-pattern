/*
 * room.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef BEHAVIORAL_ROOM_H_
#define BEHAVIORAL_ROOM_H_

#include "behavioral/map_parts.h"
#include "behavioral/map_site.h"

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

#endif  // BEHAVIORAL_ROOM_H_
