/*
 * wall.cc
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#include "wall.h"
#include <iostream>

Wall::Wall() {
  std::cout << "Wall::Wall()." << std::endl;
}

Wall::~Wall() {
  std::cout << "Wall::~Wall()." << std::endl;
}

Wall* Wall::Clone() const
{
  return new Wall(*this);
}

void Wall::Enter() {
  std::cout << "Wall::Enter()." << std::endl;
}
