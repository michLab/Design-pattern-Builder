#include "planedirector.h"

/**
 * @brief PlaneDirector::PlaneDirector
 */
PlaneDirector::PlaneDirector()
{

}

/**
 * @brief PlaneDirector::create_plane
 * @param builder
 * @return a shared ptr to created plane
 */
std::shared_ptr<Plane> PlaneDirector::create_plane(PlaneBuilder &builder)
{
    builder.build_body();
    builder.build_engine();
    return builder.get_plane();
}
