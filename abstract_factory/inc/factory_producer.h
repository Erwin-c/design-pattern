/*
 * factory_producer.h
 *
 *  Created on: Dec 27, 2020
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_FACTORY_PRODUCER_H_
#define ABSTRACT_FACTORY_INC_FACTORY_PRODUCER_H_

#include <string>

#include "abstract_factory.h"

class FactoryProducer {
public:
  FactoryProducer();

  ~FactoryProducer();

  static AbstractFactory* getFactory(const std::string& choice);
};

#endif /* ABSTRACT_FACTORY_INC_FACTORY_PRODUCER_H_ */
