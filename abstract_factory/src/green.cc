/*
 * green.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "green.h"

Green::Green() { std::cout << "Inside Green::Green() method." << std::endl; }

Green::~Green() { std::cout << "Inside Green::~Green() method." << std::endl; }

void Green::fill() { std::cout << "Inside Green::fill() method." << std::endl; }
