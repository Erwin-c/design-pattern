/*
 * singleton2.h
 *
 *  Created on: Jan 1, 2021
 *      Author: Erwin
 */

#ifndef SINGLETON2_INC_SINGLETON2_H_
#define SINGLETON2_INC_SINGLETON2_H_

class Singleton2 {
 private:
  Singleton2();

 public:
  ~Singleton2();

  // Magic Static
  // If control enters the declaration concurrently while the variable is being initialized,
  // the concurrent execution shall wait for completion of the initialization.
  static Singleton2& getInstance(){
    static Singleton2 instance;
    return instance;
  }
};

#endif /* SINGLETON2_INC_SINGLETON2_H_ */
