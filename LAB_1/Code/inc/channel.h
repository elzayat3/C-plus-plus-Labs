#ifndef CHANNEL
#define CHANNEL



#define  SIZE    5

class channel 
{
    private:

    const int max_size=SIZE;
    int*ptr;
    int in=0;
    int out=0;
    int count=0;
    

    public:

    channel();

    typedef enum 
    {
        OK,
        EMPTY,
        FULL
    }error_t;

    

    error_t read(int&value);
    
    error_t write(int value);

    ~channel();



};


#endif /* CHANNEL */
