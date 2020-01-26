#ifndef PROPELLERBUILDER_H
#define PROPELLERBUILDER_H

#include "planebuilder.h"

class PropellerBuilder : public PlaneBuilder
{
public:
    PropellerBuilder();
    virtual ~PropellerBuilder() override;
    virtual void build_body() override;
    virtual void build_engine() override;
    virtual std::shared_ptr<Plane> get_plane() override;
private:
    std::shared_ptr<Plane> plane;
};

#endif // PROPELLERBUILDER_H
