/// Question: WHY Builder Design Pattern
/// Answer  : Because i want to build an object(plane) and it is compossed of
///  complex objects(body, engine) step by step.

#include <iostream>
#include "Plane/propellerbuilder.h"
#include "Plane/jetbuilder.h"
#include "Plane/planedirector.h"

using namespace std;

int main()
{
    cout << "C++ design pattern: BUILDER" << endl;
    PropellerBuilder propeller_builder;
    PlaneDirector plane_director;
    std::shared_ptr<Plane> propeller_plane =
            plane_director.create_plane(propeller_builder);
    propeller_plane->show();

    JetBuilder jet_builder;
    std::shared_ptr<Plane> jet_plane = plane_director.create_plane(jet_builder);
    jet_plane->show();
    return 0;
}
