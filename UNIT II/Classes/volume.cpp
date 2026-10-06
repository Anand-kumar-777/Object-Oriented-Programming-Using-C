// 3. Calculate the AREA and VOLUME of different shapes, 
// by function overloading using the Classes and Object.
/*
Date : 07/09/2026
Author : Anand Kumar
Organization : CUHP
*/

#include <iostream>
using namespace std;

class Shape
{

public:
    void calArea(int radius, float PI = 3.1415)
    {
        cout << "Area of Circle : " << (PI * radius * radius)<<endl;
    };
    void calArea(int base, int height)
    {
        cout << "Area of Triangle : " << (base * height) * 1.0 / 2<<endl;
    };

    void volume(int radius, int height,float PI = 3.14)
    {
        float volume = PI * (radius * radius) * height;
        cout << "Volume of Cylinder : " << volume<<endl;
    }

    void volume(int radius, float PI = 3.14)
    {
        float volume = (PI * (radius * radius * radius)) * 4 / 3;
        cout << "Volume of Sphere : " << volume << endl;
    }
};

int main()
{
    Shape S;
    S.calArea(5);
    S.calArea(3, 5);
    S.volume(5,6);
    S.volume(7);
}