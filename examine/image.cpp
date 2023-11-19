#include <iostream>
#include <cmath>
using namespace std;

class Image
{
public:
    int w, h;
    int data[1000][1000];
public:
    void turnRight();
    void turnLeft();
    void upsideDown();
    void leftToRight();

    void output();
};

void Image::turnRight()
{
    int newW = h, newH = w;
    int temp[1000][1000];
    for(int i=0; i< newH; i++){
        for(int j=0; j<newW; j++){
            temp[i][j] = data[h-1-j][i];
        }
    }
    for(int i=0; i< newH; i++){
        for(int j=0; j<newW; j++){
            data[i][j] = temp[i][j];
        }
    }
    w = newW; h = newH;

}

void Image::turnLeft()
{
    int newW = h, newH = w;
    int temp[1000][1000];
    for(int i=0; i< newH; i++){
        for(int j=0; j<newW; j++){
            temp[i][j] = data[j][w-1-i];
        }
    }
    for(int i=0; i< newH; i++){
        for(int j=0; j<newW; j++){
            data[i][j] = temp[i][j];
        }
    }
    w = newW; h = newH;
}

void Image::upsideDown()
{
    for (int i = 0; i < h/2; i++)
        for (int j = 0; j < w; j++)
            swap(data[i][j], data[h-1-i][j]);
}

void Image::leftToRight()
{
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w/2; j++)
            swap(data[i][j], data[i][w-j-1]);
}

void Image::output()
{
    cout.precision(5);
    for(int i=0; i< h; i++){
        for(int j=0; j<w; j++){
            cout << data[i][j] << "  ";
        }
        cout<< endl;
    }
}

int main(){
    Image img;
    img.h = 2;
    img.w = 3;
    img.data[0][0] = 10;// = {10, 0, 10};
    img.data[0][1] = 0;// = {10, 0, 10};
    img.data[0][2] = 10;// = {10, 0, 10};
    img.data[1][0] = 100;// {100, 100, 10};
    img.data[1][1] = 100;// {100, 100,10};
    img.data[1][2] = 10;// {100, 100, 10};
    img.leftToRight();
    img.output();

    return 0;
}