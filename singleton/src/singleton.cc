/*
 * singleton.cc
 *
 *  Created on: Dec 28, 2020
 *      Author: Erwin
 */

#include "singleton.h"

Singleton* Singleton::m_instance_ptr = nullptr;

Singleton::Singleton() { std::cout << "Singleton::Singleton() method." << std::endl; }

Singleton::~Singleton() { std::cout << "Singleton::~Singleton() method." << std::endl; }

Singleton* Singleton::getInstance() {
  if (m_instance_ptr == nullptr) {
    m_instance_ptr = new Singleton();
  }

  return m_instance_ptr;
}
