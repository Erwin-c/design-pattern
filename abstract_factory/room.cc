/*
 * room.cc
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#include "room.h"

#include <iostream>

Room::Room(int n) : room_number_(n) {
  std::cout << "Room::Room(int n)." << std::endl;
}

Room::~Room() { std::cout << "Room::~Room()." << std::endl; }

Room* Room::Clone() const { return new Room(*this); }

int Room::room_number() const { return room_number_; }

void Room::set_side(Direction direction, MapSite* map_site) {
  sides_[direction] = map_site;
}

void Room::Enter() { std::cout << "Room::Enter()." << std::endl; }
