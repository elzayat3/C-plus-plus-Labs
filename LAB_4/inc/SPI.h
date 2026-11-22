#ifndef SPI
#define SPI


#include "IcomBus.h"

#include <iostream>


class Spi : public IcomBus
{
    public:
    void send(int x) override
    {
        std::cout << x << " From SPI\n";

    }


};


#endif /* SPI */
