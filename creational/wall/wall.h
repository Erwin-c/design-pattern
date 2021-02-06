/*
 * wall.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_WALL_WALL_H_
#define CREATIONAL_WALL_WALL_H_

#include "creational/map_site.h"

class Wall : public MapSite {
 public:
  Wall();
  virtual ~Wall();

  virtual Wall* Clone() const;

  virtual void Enter();
};

#endif  // CREATIONAL_WALL_WALL_H_
