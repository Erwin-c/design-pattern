/*
 * shape_factory.h
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#ifndef FACTORY_METHOD_INC_SHAPE_FACTORY_H_
#define FACTORY_METHOD_INC_SHAPE_FACTORY_H_

#include <string>

#include "abstract_factory.h"
#include "color.h"
#include "shape.h"

class ShapeFactory : public AbstractFactory {
 public:
  ShapeFactory();

  ~ShapeFactory();

  Color* getColor(const std::string& colorType);

  Shape* getShape(const std::string& shapeType);
};

#endif /* FACTORY_METHOD_INC_SHAPE_FACTORY_H_ */
