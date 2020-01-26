#include "jetbuilder.h"

/**
 * @brief JetBuilder::JetBuilder
 */
JetBuilder::JetBuilder()
{
    plane = std::make_shared<Plane>("Jet plane");
}

/**
 * @brief JetBuilder::~JetBuilder
 */
JetBuilder::~JetBuilder()
{

}

/**
 * @brief JetBuilder::build_body
 */
void JetBuilder::build_body()
{
    plane->set_body("Jet body");
}

/**
 * @brief JetBuilder::build_engine
 */
void JetBuilder::build_engine()
{
    plane->set_engine("Jet engine");
}

/**
 * @brief JetBuilder::get_plane
 * @returnA shared ptr to created plane
 */
std::shared_ptr<Plane> JetBuilder::get_plane()
{
    return plane;
}
