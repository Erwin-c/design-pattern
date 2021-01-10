/*
 * wall.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_WALL_H_
#define ABSTRACT_FACTORY_INC_WALL_H_

#include "map_site.h"

class Wall : public MapSite {
 public:
  Wall();
  virtual ~Wall();

  virtual Wall* Clone() const;

  virtual void Enter();
};

#endif  // ABSTRACT_FACTORY_INC_WALL_H_
