
# include <iostream>

#include <memory>

class IFeed
{
    public:
    virtual void ACTIVATE()=0;
    virtual void DEACTIVATE()=0;
};


class mic : public IFeed
{
    public:
    void ACTIVATE() override
    {
        std::cout << "mic activate" << std::endl;

        
    }
    void DEACTIVATE() override
    {
        std::cout << "mic deactivate" << std::endl;
        
    }


    void play_sound(void)
    {

        std::cout<<"mic feed";

    }
};


class camera : public IFeed
{
    public:
    void ACTIVATE() override
    {
        std::cout << "camera activate" << std::endl;
        
    }
    void DEACTIVATE() override
    {
        std::cout << "camera deactivate" << std::endl;
        
    }

    void play_feed(void)
    {
        std::cout<<"camera feed";
    }
};


class lidar : public IFeed
{
    public:
    void ACTIVATE() override
    {
        std::cout << "lidar  activate" << std::endl;
        
    }
    void DEACTIVATE() override
    {
        std::cout << "lidar dectivate" << std::endl;
        
    }

    void scan_env(void)
    {
        std::cout<<"lidar feed";

    }
};


class control_station
{
    public:
    std::unique_ptr<IFeed> ptr;

    void registerfeed(std::unique_ptr<IFeed>&feed)
    {
        ptr=std::move(feed);

    }

    void activate()
    {
        ptr->ACTIVATE();

    }

    void deactivate()
    {
        ptr->DEACTIVATE();

    }

    void view_feed()
    {
        mic*pm=dynamic_cast<mic*>(ptr.get());
        camera*pc=dynamic_cast<camera*>(ptr.get());
        lidar*pl=dynamic_cast<lidar*>(ptr.get());

        if(pm != nullptr)
        {
            pm->play_sound ();
        }

        if(pc==nullptr)
        {
            pc->play_feed();
        }

        if(pl==nullptr)
        {
            pl->scan_env();
        }

    }


};

int main()
{
    mic obj;
    std::unique_ptr<IFeed> ptr=std::make_unique<mic>(obj);

    control_station obj2;

    obj2.registerfeed(ptr);

}


