#ifndef ICOMBUS
#define ICOMBUS

class IcomBus
{
    public:
    virtual void send(int)=0;

    ~IcomBus()=default;

};

#endif /* ICOMBUS */
