#ifndef JETBUILDER_H
#define JETBUILDER_H

#include "planebuilder.h"

class JetBuilder : public PlaneBuilder
{
public:
    JetBuilder();
    virtual ~JetBuilder() override;
    virtual void build_body() override;
    virtual void build_engine() override;
    virtual std::shared_ptr<Plane> get_plane() override;
private:
    std::shared_ptr<Plane> plane;
};
#endif // JETBUILDER_H
