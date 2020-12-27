/*
 * blue.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "blue.h"

Blue::Blue() { std::cout << "Inside Blue::Blue() method." << std::endl; }

Blue::~Blue() { std::cout << "Inside Blue::~Blue() method." << std::endl; }

void Blue::fill() { std::cout << "Inside Blue::fill() method." << std::endl; }
