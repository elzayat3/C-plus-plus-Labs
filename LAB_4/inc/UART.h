#ifndef UART
#define UART

#include "IcomBus.h"

#include <iostream>


class Uart : public IcomBus
{
    public:
    void send(int x) override
    {
        std::cout << x << " From UART\n";

    }


};
#endif /* UART */
