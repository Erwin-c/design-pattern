/*
 * color_factory.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#include <iostream>

#include "color_factory.h"
#include "color.h"
#include "blue.h"
#include "green.h"
#include "red.h"

ColorFactory::ColorFactory() { std::cout << "ColorFactory::ColorFactory() method." << std::endl; }

ColorFactory::~ColorFactory() { std::cout << "ColorFactory::~ColorFactory() method." << std::endl; }

Color* ColorFactory::getColor(const std::string& colorType) {
  if (colorType.empty()) {
    return nullptr;
  }

  if (colorType.compare("BLUE") == 0) {
    return new Blue();
  } else if (colorType.compare("GREEN") == 0) {
    return new Green();
  } else if (colorType.compare("RED") == 0) {
    return new Red();
  }

  return nullptr;
}

Shape* ColorFactory::getShape(const std::string& shapeType) { return nullptr; }
