/*
 * singleton2.cc
 *
 *  Created on: Jan 1, 2021
 *      Author: Erwin
 */

#include <iostream>

#include "singleton2.h"

Singleton2::Singleton2() { std::cout << "Singleton2::Singleton2() method." << std::endl; }

Singleton2::~Singleton2() { std::cout << "Singleton2::~Singleton2() method." << std::endl; }
