/*
 * blue.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_BLUE_H_
#define ABSTRACT_FACTORY_INC_BLUE_H_

#include "color.h"

class Blue : public Color {
 public:
  Blue();

  ~Blue();

  void fill();
};

#endif /* ABSTRACT_FACTORY_INC_BLUE_H_ */
