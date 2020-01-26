#include "propellerbuilder.h"

/**
 * @brief PropellerBuilder::PropellerBuilder
 */
PropellerBuilder::PropellerBuilder()
{
    plane = std::make_shared<Plane>("Propeller plane");
}

/**
 * @brief PropellerBuilder::~PropellerBuilder
 */
PropellerBuilder::~PropellerBuilder()
{

}

/**
 * @brief PropellerBuilder::build_body
 */
void PropellerBuilder::build_body()
{
    plane->set_body("Propeller body");
}

/**
 * @brief PropellerBuilder::build_engine
 */
void PropellerBuilder::build_engine()
{
    plane->set_engine("Propeller engine");
}

/**
 * @brief PropellerBuilder::get_plane
 * @return A shared ptr to Plane object
 */
std::shared_ptr<Plane> PropellerBuilder::get_plane()
{
    return plane;
}
