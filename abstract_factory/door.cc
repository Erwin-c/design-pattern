/*
 * door.cc
 *
 *  Created on: Jan 17, 2021
 *      Author: Erwin
 */

#include "door.h"

#include <iostream>

Door::Door() { std::cout << "Door::Door()." << std::endl; }

Door::Door(Room* r1, Room* r2) : room1_(r1), room2_(r2) {
  std::cout << "Door::Door(Room* r1, Room* r2)." << std::endl;
}

Door::Door(const Door& other) {
  room1_ = other.room1_;
  room2_ = other.room2_;
  std::cout << "Door::Door(const Door& other)." << std::endl;
}

Door::~Door() { std::cout << "Door::~Door()." << std::endl; }

Door* Door::Clone() const { return new Door(*this); }

void Door::Initialize(Room* r1, Room* r2) {
  room1_ = r1;
  room2_ = r2;
}

void Door::Enter() { std::cout << "Door::Enter()." << std::endl; }
