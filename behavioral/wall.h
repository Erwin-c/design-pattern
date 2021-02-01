/*
 * wall.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef BEHAVIORAL_WALL_H_
#define BEHAVIORAL_WALL_H_

#include "behavioral/map_site.h"

class Wall : public MapSite {
 public:
  Wall();
  virtual ~Wall();

  virtual Wall* Clone() const;

  virtual void Enter();
};

#endif  // BEHAVIORAL_WALL_H_
