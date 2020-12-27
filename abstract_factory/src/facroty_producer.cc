/*
 * facroty_producer.cc
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#include <iostream>
#include <string>

#include "factory_producer.h"
#include "abstract_factory.h"
#include "color_factory.h"
#include "shape_factory.h"

FactoryProducer::FactoryProducer() { std::cout << "FactoryProducer::FactoryProducer() method." << std::endl; }

FactoryProducer::~FactoryProducer() { std::cout << "FactoryProduce::~FactoryProducer() method." << std::endl; }

AbstractFactory* FactoryProducer::getFactory(const std::string& choice) {
  if (choice.empty()) {
    return nullptr;
  }

  if (choice.compare("COLOR") == 0) {
    return new ColorFactory();
  } else if (choice.compare("SHAPE") == 0) {
    return new ShapeFactory();
  }

  return nullptr;
}
