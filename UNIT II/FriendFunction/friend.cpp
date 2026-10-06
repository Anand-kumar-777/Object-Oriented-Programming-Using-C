/*Write a program for friend function using non member function
Date : 01/09/2026
Author : Anand Kumar
*/
// Friend function should be declare inside the class and definiation should be outside of the class
#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    int rollNo;
    Student(string stuName)
    {
        name = stuName;
    }

    friend void newStudent(Student&);
    void display(){
        cout<<"If this text displayed, It means display function is friend function of newStudent";
    }
};

void newStudent(){
 cout<<"New Student is friend of Student Class"<<endl;
}
int main()
{
    Student s1 = Student("Anand");
    newStudent();
    s1.display();
    return 0;
}