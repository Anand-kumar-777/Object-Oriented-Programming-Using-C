/*Write a c++ program to calculate area of Circle, reactangle
and cuboid using the function overloading.
Date : 02/09/2026
Author : Anand Kumar
Organization : CUHP
Designation : Student
*/

#include <iostream>
using namespace std;

float area(int r)
{
    cout << "Area of Circle: " << 3.14 * r * r << endl;
};
float area(int l, int w)
{
    cout << "Area of Rectangle: " << l * w << endl;
};

float area(int l, int w, int h)
{
    cout << "Area of Cuboid: " << 2 * (l * w + w * h + h * l) << endl;
};

int main()
{
    cout<<"All unit will in CM."<<endl;
    int r, l, w, h;
    cout << "Radius : ";
    cin >> r;
    cout << "Length : ";
    cin >> l;
    cout << "Width : ";
    cin >> w;
    cout << "Height : ";
    cin >> h;
    area(r);
    area(l, w);
    area(l, w, h);
    return 0;
}