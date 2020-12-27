/*
 * red.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "red.h"

Red::Red() { std::cout << "Inside Red::Red() method." << std::endl; }

Red::~Red() { std::cout << "Inside Red::~Red() method." << std::endl; }

void Red::fill() { std::cout << "Inside Red::fill() method." << std::endl; }
