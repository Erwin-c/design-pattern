/*
 * bombed_wall.h
 *
 *  Created on: Feb 6, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_WALL_BOMBED_WALL_H
#define CREATIONAL_WALL_BOMBED_WALL_H

#include "creational/wall/wall.h"

class BombedWall : public Wall {
 public:
  BombedWall();
  BombedWall(const BombedWall& other);
  ~BombedWall();

  virtual Wall* Clone() const;

  bool HasBomb();

 private:
  bool bomb_;
};

#endif /* CREATIONAL_WALL_BOOMED_WALL_H */
