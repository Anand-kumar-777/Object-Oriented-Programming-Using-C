#include<iostream>

using namespace std;

class Students{
    public: 
        int age;
        Students()
        {
            cout<< "This is a constructor: ";
        }
};
int main () 
{
    Students s1;
}
