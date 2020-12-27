/*
 * circle.h
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#ifndef FACTORY_METHOD_INC_CIRCLE_H_
#define FACTORY_METHOD_INC_CIRCLE_H_

#include "shape.h"

class Circle : public Shape {
 public:
  Circle();

  ~Circle();

  void draw();
};

#endif /* FACTORY_METHOD_INC_CIRCLE_H_ */
