#ifndef SERVER
#define SERVER


#include "channel.h"
class server
{
    public:

    typedef enum 
    {
        speed,
        temp,
        rpm,
        num_of_type
    }channel_id_t;

    channel::error_t server_write(channel_id_t id ,int data);
    channel*bind(channel_id_t id);

    private:

    channel ch[num_of_type];

};


#endif /* SERVER */
