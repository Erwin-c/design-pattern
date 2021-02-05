/*
 * map_site.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef CREATIONAL_MAP_SITE_H_
#define CREATIONAL_MAP_SITE_H_

class MapSite {
 public:
  MapSite();
  virtual ~MapSite();

  virtual void Enter() = 0;
};

#endif  // CREATIONAL_MAP_SITE_H_
