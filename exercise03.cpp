#include <iostream>

using namespace std;

int volume(int height, int width, int length);

int volume(int height, int width, int length);

struct box
{
    int height;
    int width;
    int length;

};

int main() {

    box box1;
    int box1Height;
    int box1Length;
    int box1Width;

    box box2;
    int box2Height;
    int box2Length;
    int box2Width;
    int totalVolume;
    
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
       totalVolume = volume(box1Height, box1Width,         box1Length)
             + volume(box2Height, box2Width,               box2Length);
             
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

int volume(int height, int width, int length)
{
    return (height*width*length);

}

