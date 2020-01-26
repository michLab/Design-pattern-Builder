#ifndef PLANEBUILDER_H
#define PLANEBUILDER_H

#include <memory>
#include "plane.h"

/**
 * @brief The PlaneBuilder class
 * Plane builder abstract interface
 */
class PlaneBuilder
{
public:
    virtual ~PlaneBuilder();
    virtual void build_body() = 0;
    virtual void build_engine() = 0;
    virtual std::shared_ptr<Plane> get_plane() = 0;


};

#endif // PLANEBUILDER_H
