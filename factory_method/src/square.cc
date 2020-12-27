/*
 * square.cc
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "square.h"

Square::Square() { std::cout << "Inside Square::Square() method." << std::endl; }

Square::~Square() { std::cout << "Inside Square::~Square() method." << std::endl; }

void Square::draw() { std::cout << "Inside Square::draw() method." << std::endl; }
