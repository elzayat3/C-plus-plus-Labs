
#include"inc/channel.h"
#include <iostream>

#include"inc/server.h"

#include"inc/client.h"


int main()
{   
    int value;
    server s;


    Client c(s,server::temp);


    if(s.server_write(server::temp, 5)==channel::OK)
    {
        std::cout<<"successful write\n";
    }
    else
    {
        std::cout<<"write fail\n";
        
    }
    if(s.server_write(server::temp, 6)==channel::OK)
    {
        std::cout<<"successful write\n";
    }
    else
    {
        std::cout<<"write fail\n";
        
    }
    if(s.server_write(server::temp, 7)==channel::OK)
    {
        std::cout<<"successful write\n";
    }
    else
    {
        std::cout<<"write fail\n";
        
    }
    if(s.server_write(server::temp, 8)==channel::OK)
    {
        std::cout<<"successful write\n";
    }
    else
    {
        std::cout<<"write fail\n";
        
    }
    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }
    

    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }

    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }

    if(s.server_write(server::temp, 9)==channel::OK)
    {
        std::cout<<"successful write\n";
    }
    else
    {
        std::cout<<"write fail\n";
        
    }
    if(s.server_write(server::temp, 10)==channel::OK)
    {
        std::cout<<"successful write\n";
    }
    else
    {
        std::cout<<"write fail\n";
        
    }


    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }
    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }

    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }
    if(c.Client_read(value)==channel::OK)
    {
        std::cout<<value<<"\n";
    }
    else
    {
        std::cout<<"invalid read \n";
    }

}