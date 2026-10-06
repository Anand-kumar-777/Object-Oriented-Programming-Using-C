/*Structures (also called structs) are a way to group several related variables into one place.

Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types: int, string, bool, etc.

Date : 25/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

struct student{
    string name;
    int rollNo;
    string subject;
    int marks;
};

int main(){
    //Creating the Object of the Student
    student s1 = student();
    s1.name = "Anand Kumar";
    s1.rollNo = 06;
    s1.subject = "OOPs in C++";
    s1.marks = 89;

    student s2 = student();
    s2.name = "Aditya Pratap Singh";
    s2.rollNo = 04;
    s2.subject = "Computer Networks";
    s2.marks = 90;

    cout<<"-----------Student Detials------------"<<endl;
    cout<<".......Student 1........."<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Roll No : "<<s1.rollNo<<endl;
    cout<<"Subject : "<<s1.subject<<endl;
    cout<<"Marks : "<<s1.marks<<endl;
    cout<<".......Student 2........."<<endl;
    cout<<"Name : "<<s2.name<<endl;
    cout<<"Roll No : "<<s2.rollNo<<endl;
    cout<<"Subject : "<<s2.subject<<endl;
    cout<<"Marks : "<<s2.marks<<endl;
    
    return 0;
}