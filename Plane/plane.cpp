#include "plane.h"

/**
 * @brief Plane::Plane
 * @param plane_type Type of plane
 */
Plane::Plane(std::string plane_type)
{
    name_ = plane_type;
}

/**
 * @brief Plane::set_body
 * @param type Type of body
 */
void Plane::set_body(std::string type)
{
    body_ = type;
}

/**
 * @brief Plane::set_engine
 * @param type Type pf engine
 */
void Plane::set_engine(std::string type)
{
    engine_ = type;
}

/**
 * @brief Plane::get_body
 * @return A body type
 */
std::string Plane::get_body() const
{
    return body_;
}

/**
 * @brief Plane::get_engine
 * @return An engine type
 */
std::string Plane::get_engine() const
{
    return engine_;
}

void Plane::show()
{
    std::cout << "[Plane] type: " << name_
              << " body: " << body_
              << " engine: " << engine_
              << std::endl;
}
