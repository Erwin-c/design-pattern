/*
 * abstract_factory.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "abstract_factory.h"

AbstractFactory::AbstractFactory() { std::cout << "AbstractFactory::AbstractFactory() method." << std::endl; }

AbstractFactory::~AbstractFactory() { std::cout << "AbstractFactory::~AbstractFactory() method." << std::endl; }
