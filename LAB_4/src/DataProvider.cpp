

#include "../inc/Dataprovider.h"


//#include "../inc/IcomBus.h"





void Dataprovider::register_provider(IcomBus*vv)
{
    v.emplace_back(vv);
}

void Dataprovider::broadcast(int x)
{

    for(int i=0;i<v.size();i++)
    {
        v[i]->send(x);
    }  
}
