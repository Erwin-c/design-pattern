/*
 * singleton2_test.cc
 *
 *  Created on: Jan 1, 2021
 *      Author: Erwin
 */

#ifdef SINGLETON2_ENV_

#include <iostream>

#include "singleton2.h"

int main() {
  Singleton2& instance = Singleton2::getInstance();
  Singleton2& instance2 = Singleton2::getInstance();

  return 0;
}

#endif // SINGLETON2_ENV_
