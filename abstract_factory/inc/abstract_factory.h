/*
 * abstract_factory.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_INC_ABSTRACT_FACTORY_H_

#include <string>

#include "color.h"
#include "shape.h"

class AbstractFactory {
 public:
  AbstractFactory();

  virtual ~AbstractFactory();

  virtual Color* getColor(const std::string& colorType) = 0;

  virtual Shape* getShape(const std::string& shapeType) = 0;
};

#endif /* ABSTRACT_FACTORY_INC_ABSTRACT_FACTORY_H_ */
