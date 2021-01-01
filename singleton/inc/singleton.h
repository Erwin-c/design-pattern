/*
 * singleton.h
 *
 *  Created on: Dec 28, 2020
 *      Author: Erwin
 */

#ifndef SINGLETON_INC_SINGLETON_H_
#define SINGLETON_INC_SINGLETON_H_

#include <iostream>

// Thread insecure and memory leak
class Singleton {
 private:
  static Singleton* m_instance_ptr;

  Singleton();

 public:
  ~Singleton();

  static Singleton* getInstance();
};

#endif /* SINGLETON_INC_SINGLETON_H_ */
