/*
 * color.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_COLOR_H_
#define ABSTRACT_FACTORY_INC_COLOR_H_

class Color {
 public:
  Color();

  virtual ~Color();

  virtual void fill() = 0;
};

#endif /* ABSTRACT_FACTORY_INC_COLOR_H_ */
