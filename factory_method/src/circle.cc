/*
 * circle.cc
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "circle.h"

Circle::Circle() { std::cout << "Inside Circle::Circle() method." << std::endl; }

Circle::~Circle() { std::cout << "Inside Circle::~Circle() method." << std::endl; }

void Circle::draw() { std::cout << "Inside Circle::draw() method." << std::endl; }
