/*
 * room.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_ROOM_H_
#define ABSTRACT_FACTORY_INC_ROOM_H_

#include "map_parts.h"
#include "map_site.h"

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

#endif /* ABSTRACT_FACTORY_INC_ROOM_H_ */
