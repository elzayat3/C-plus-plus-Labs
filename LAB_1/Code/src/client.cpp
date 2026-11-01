

#include"../inc/client.h"



Client::Client(server&s ,server::channel_id_t id)
{
    ptr=s.bind(id);
}

channel::error_t Client::Client_read(int&value)
{
    

    channel::error_t status= ptr->read(value);

     return status;
    
}
