/*
 * singleton.h
 *
 *  Created on: Dec 28, 2020
 *      Author: Erwin
 */

#ifndef SINGLETON_INC_SINGLETON_H_
#define SINGLETON_INC_SINGLETON_H_

#include <iostream>

class Singleton {
 private:
  static Singleton* m_instance_ptr;

  Singleton() { std::cout << "Singleton::Singleton() method." << std::endl; };

 public:
  ~Singleton() { std::cout << "Singleton::~Singleton() method." << std::endl; };

  static Singleton* getInstance();
};

#endif /* SINGLETON_INC_SINGLETON_H_ */
