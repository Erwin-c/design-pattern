/*
 * main.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifdef ABSTRACT_FACTORY_ENV_

#include <iostream>
#include <string>

#include "factory_producer.h"
#include "shape_factory.h"

int main() {
  std::string factoryType;
  std::cout << "What kind of factory do you want to create?" << std::endl;
  std::cout << "COLOR or SHAPE?" << std::endl;
  std::cin >> factoryType;

  AbstractFactory* factory = FactoryProducer::getFactory(factoryType);
  if (factory == nullptr) {
    std::cout << "Factory type is invalid." << std::endl;
    return -1;
  }

  if (factoryType.compare("COLOR") == 0) {
    std::string colorType;
    std::cout << "Please input the color type." << std::endl;
    std::cout << "BLUE, GREEN or RED?" << std::endl;
    std::cin >> colorType;

    Color* color = factory->getColor(colorType);
      if (color == nullptr) {
        std::cout << "Shape type is invalid." << std::endl;
        delete factory;
        return -1;
      }
    color->fill();

    delete color;
  }

  if (factoryType.compare("SHAPE") == 0) {
    std::string shapeType;
    std::cout << "Please input the shape type." << std::endl;
    std::cout << "CIRCLE, RECTANGLE or SQUARE?" << std::endl;
    std::cin >> shapeType;

    Shape* shape = factory->getShape(shapeType);
      if (shape == nullptr) {
        std::cout << "Shape type is invalid." << std::endl;
        delete factory;
        return -1;
      }
    shape->draw();

    delete shape;
  }

  delete factory;

  return 0;
}

#endif /* ABSTRACT_FACTORY_ENV_ */
