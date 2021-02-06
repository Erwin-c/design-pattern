/*
 * bombed_wall.cc
 *
 *  Created on: Feb 6, 2021
 *      Author: Erwin
 */

#include "creational/wall/bombed_wall.h"

#include <iostream>

BombedWall::BombedWall() : Wall() {
  std::cout << "BombedWall::BombedWall()" << std::endl;
}

BombedWall::~BombedWall() {
  std::cout << "BombedWall::~BombedWall()" << std::endl;
}

Wall* BombedWall::Clone() const { return new BombedWall(*this); }

BombedWall::BombedWall(const BombedWall& other) : Wall(other) {
  bomb_ = other.bomb_;
}
