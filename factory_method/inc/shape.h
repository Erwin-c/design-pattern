/*
 * shape.h
 *
 *  Created on: Dec 12, 2020
 *      Author: Erwin
 */

#ifndef FACTORY_METHOD_INC_SHAPE_H_
#define FACTORY_METHOD_INC_SHAPE_H_

class Shape {
 public:
  Shape();

  virtual ~Shape();

  virtual void draw() = 0;
};

#endif /* FACTORY_METHOD_INC_SHAPE_H_ */
