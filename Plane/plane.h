#ifndef PLANE_H
#define PLANE_H

#include <iostream>

/**
 * @brief The Plane class
 */
class Plane
{
public:
    Plane(std::string plane_type);
    void set_body(std::string type);
    void set_engine(std::string type);
    std::string get_body() const;
    std::string get_engine() const;
    void show();
private:
    std::string name_;
    std::string body_;
    std::string engine_;
};

#endif // PLANE_H
