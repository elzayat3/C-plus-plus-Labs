#include "inc/Dataprovider.h"

#include "inc/Ethernet.h"

#include "inc/SPI.h"

#include "inc/UART.h"


int main(void)
{

    /*
    
    IcomBus*Uart_obj=new Uart();

    IcomBus*Spi_obj=new Spi();

    IcomBus*Ethernet_obj=new Ethernet();*/


    Uart Uart_obj;

    Spi Spi_obj;

    Ethernet Ethernet_obj;

    Dataprovider obj;

    obj.register_provider(&Uart_obj);

    obj.register_provider(&Spi_obj);

    obj.register_provider(&Ethernet_obj);


    obj.broadcast(5);

    obj.broadcast(8);

    obj.broadcast(10);

    obj.broadcast(11);


    

}
