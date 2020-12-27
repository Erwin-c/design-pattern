/*
 * rectangle.cc
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle() { std::cout << "Inside Rectangle::Rectangle() method." << std::endl; }

Rectangle::~Rectangle() { std::cout << "Inside Rectangle::~Rectangle() method." << std::endl; }

void Rectangle::draw() { std::cout << "Inside Rectangle::draw() method." << std::endl; }
