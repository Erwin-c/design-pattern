/*
 * Rectangle.h
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#ifndef FACTORY_METHOD_INC_RECTANGLE_H_
#define FACTORY_METHOD_INC_RECTANGLE_H_

#include "shape.h"

class Rectangle : public Shape {
 public:
  Rectangle();

  ~Rectangle();

  void draw();
};

#endif /* FACTORY_METHOD_INC_RECTANGLE_H_ */
