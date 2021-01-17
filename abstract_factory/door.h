/*
 * door.h
 *
 *  Created on: Jan 17, 2021
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_DOOR_H_
#define ABSTRACT_FACTORY_DOOR_H_

#include "map_site.h"
#include "room.h"

class Door : public MapSite {
 public:
  Door();
  Door(Room* r1, Room* r2);
  Door(const Door& other);

  virtual Door* Clone() const;
  virtual void Initialize(Room* r1, Room* r2);

  virtual void Enter();
  Room* OtherSideFrom(Room* room);

 private:
  Room* room1_;
  Room* room2_;
};

#endif  // ABSTRACT_FACTORY_DOOR_H_
