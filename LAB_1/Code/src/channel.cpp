#include"../inc/channel.h"





channel::channel()
{

    ptr=new int [max_size];
    
}


channel::error_t channel::read(int&value)
{
    error_t status=OK;

    if(out==max_size)
    {
        out=0;

    }else{;}

    if(0==count)
    {
        status=EMPTY;
    }
    else
    {
        value=ptr[out]; 
        out++;
        count--;
    }

    return status;
    
}

channel::error_t channel::write(int value)
{
    error_t status=OK;

    if(in==max_size)
    {
        in=0;

    }else{;}

    if(max_size==count)
    {
        status=FULL;
    }
    else
    {
        ptr[in]=value; 
        in++;
        count++;
    }

    return status;
}


channel::~channel()
{
    delete[] ptr;
}