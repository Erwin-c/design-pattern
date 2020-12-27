/*
 * red.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_RED_H_
#define ABSTRACT_FACTORY_INC_RED_H_

#include "color.h"

class Red : public Color {
 public:
  Red();

  ~Red();

  void fill();
};

#endif /* ABSTRACT_FACTORY_INC_RED_H_ */
