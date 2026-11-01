

#include"../inc/server.h"




channel::error_t server::server_write(channel_id_t id ,int data)
{

    channel::error_t status= ch[id].write(data);

    return status;

}

channel*server::bind(channel_id_t id)
{
    return &ch[id];
    
}