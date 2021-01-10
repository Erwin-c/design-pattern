/*
 * map_site.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_INC_MAP_SITE_H_
#define ABSTRACT_FACTORY_INC_MAP_SITE_H_

class MapSite {
 public:
  MapSite();

  virtual ~MapSite();

  virtual void Enter() = 0;
};

#endif  // ABSTRACT_FACTORY_INC_MAP_SITE_H_
