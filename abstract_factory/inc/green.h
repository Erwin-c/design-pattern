/*
 * green.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_GREEN_H_
#define ABSTRACT_FACTORY_INC_GREEN_H_

#include "color.h"

class Green : public Color {
 public:
  Green();

  ~Green();

  void fill();
};

#endif /* ABSTRACT_FACTORY_INC_GREEN_H_ */
