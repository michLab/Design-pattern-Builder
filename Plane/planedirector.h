#ifndef PLANEDIRECTOR_H
#define PLANEDIRECTOR_H

#include "planebuilder.h"

/**
 * @brief The PlaneDirector class
 */
class PlaneDirector
{
public:
    PlaneDirector();
    std::shared_ptr<Plane> create_plane(PlaneBuilder& builder);
};

#endif // PLANEDIRECTOR_H
