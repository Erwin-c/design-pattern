/*
 * Square.h
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#ifndef FACTORY_METHOD_INC_SQUARE_H_
#define FACTORY_METHOD_INC_SQUARE_H_

#include "shape.h"

class Square : public Shape {
 public:
  Square();

  ~Square();

  void draw();
};

#endif /* FACTORY_METHOD_INC_SQUARE_H_ */
