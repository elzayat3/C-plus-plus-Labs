
#include "IcomBus.h"

#include <iostream>

#include <vector>




class Dataprovider
{
    public:

    std::vector<IcomBus*> v;


    void register_provider(IcomBus*vv);

    void broadcast(int);
};
