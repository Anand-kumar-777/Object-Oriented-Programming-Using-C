/*This program is help to clear the concept of 
Virtual function and Run Time Polymorphism
Date : 23-09-2026
*/

#include<iostream>
using namespace std;

class Teacher{
    public:
    virtual void display(){//Virtual Function
        cout<<"This is Teacher Class."<<endl;
    }
};

class Student : public Teacher{
    public:
    void display(){//During the Run Time, This function will be decide to display because of Virtual Keywor(function)
        cout<<"Teacher class function Override the Student class function."<<endl;
    }
};

int main(){
    Teacher *T;
    Student S;
    T = &S;//T pointer stores the address of the Student S object
    T->display();//Always execute the Derived class function because of Function Override
    return 0;
}