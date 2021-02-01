/*
 * map_site.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef BEHAVIORAL_MAP_SITE_H_
#define BEHAVIORAL_MAP_SITE_H_

class MapSite {
 public:
  MapSite();
  virtual ~MapSite();

  virtual void Enter() = 0;
};

#endif  // BEHAVIORAL_MAP_SITE_H_
