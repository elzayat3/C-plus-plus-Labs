#ifndef ETHERNET
#define ETHERNET


#include "IcomBus.h"

#include <iostream>


class Ethernet : public IcomBus
{
    public:
    void send(int x) override
    {
        std::cout << x << " From Ethernet\n";

    }
};



#endif /* ETHERNET */
