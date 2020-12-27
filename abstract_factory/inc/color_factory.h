/*
 * color_factory.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_COLOR_FACTORY_H_
#define ABSTRACT_FACTORY_INC_COLOR_FACTORY_H_

#include <string>

#include "abstract_factory.h"
#include "color.h"
#include "shape.h"

class ColorFactory : public AbstractFactory {
 public:
  ColorFactory();

  ~ColorFactory();

  Color* getColor(const std::string& colorType);

  Shape* getShape(const std::string& shapeType);
};

#endif /* ABSTRACT_FACTORY_INC_COLOR_FACTORY_H_ */
