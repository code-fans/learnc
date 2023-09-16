#include<iostream>
using namespace std;

class Dev{
private:
    /* data */
    int x, y, orient;
public:
    Dev(/* args */);
    ~Dev();
    void step(int s);
    void turnLeft();
    void turnRight();
    void display();
};

Dev::Dev(){
    x=0;
    y=0;
    orient=0;
}

Dev::~Dev(){
}

void Dev::step(int s)
{
    switch (orient)
    {
    case 0:
        y+=s;
        break;
    case 1:
        x+=s;
        break;
    case 2:
        y-=s;
        break;
    case 3:
        x-=s;
    default:
        break;
    }
}

void Dev::turnLeft()
{
    if(orient!=0)
        orient-=1;
    else
        orient=3;
}

void Dev::turnRight()
{
    if(orient!=3)
        orient+=1;
    else
        orient=0;
}

void Dev::display()
{
    cout<<"Dev的坐标是：（"<<x<<","<<y<<")"<<endl;
    cout<<"Dev的方向是：";
    switch (orient)
    {
    case 0:
        cout<<"北"<<endl;
        break;
    case 1:
        cout<<"东"<<endl;
        break;
    case 2:
        cout<<"南"<<endl;
        break;
    case 3:
        cout<<"西"<<endl;
    default:
        break;
    }
}

int main()
{
    Dev dev;
    dev.display();
    dev.step(5);
    dev.turnLeft();
    dev.step(3);
    dev.turnRight();
    dev.step(-7);
    dev.display();
    return 0;
}
