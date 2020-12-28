/*
 * singleton_test.cc
 *
 *  Created on: Dec 28, 2020
 *      Author: Erwin
 */

#ifdef SINGLETON_ENV_

#include <iostream>

#include "singleton.h"

int main() {
  Singleton* instance = Singleton::getInstance();
  Singleton* instance2 = Singleton::getInstance();

  std::cout << instance << std::endl;
  std::cout << instance2 << std::endl;

  delete instance;

  return 0;
}

#endif /* SINGLETON_ENV_ */
