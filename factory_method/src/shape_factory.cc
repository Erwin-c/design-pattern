/*
 * shape_factory.cc
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#include <iostream>
#include <string>

#include "shape_factory.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

ShapeFactory::ShapeFactory() { std::cout << "ShapeFactory::ShapeFactory() function." << std::endl; }

ShapeFactory::~ShapeFactory() { std::cout << "ShapeFactory::~ShapeFactory() function. " << std::endl; }

Color* ShapeFactory::getColor(const std::string& colorType) { return nullptr; }

Shape* ShapeFactory::getShape(const std::string& shapeType) {
  if (shapeType.empty()) {
    return nullptr;
  }

  if (shapeType.compare("CIRCLE") == 0) {
    return new Circle();
  } else if (shapeType.compare("RECTANGLE") == 0) {
    return new Rectangle();
  } else if (shapeType.compare("SQUARE") == 0) {
    return new Square();
  }

  return nullptr;
}
