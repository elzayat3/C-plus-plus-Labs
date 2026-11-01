#ifndef CLIENT
#define CLIENT

#include"../inc/channel.h"

#include"../inc/server.h"


class Client{

    private:

    channel*ptr;

    public:


    Client(server&s ,server::channel_id_t id);
    

    channel::error_t Client_read(int&value);

};


#endif /* CLIENT */
