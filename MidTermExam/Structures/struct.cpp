#include<iostream>
#include<string>
using namespace std;


struct Student{
        string name;
        int rollNo;
        string course;
        int semester;
}S1,S2;

int main(){
    S1.name = "John Doe";
    S1.rollNo = 101;
    S1.course = "Computer Science";
    S1.semester = 3;

    S2.name = "Jane Smith";
    S2.rollNo = 102;
    S2.course = "Information Technology";
    S2.semester = 2;

    cout<< "Student Name: " << S1.name << endl;
    cout<< "Roll Number: " << S1.rollNo << endl;
    cout<< "Course: " << S1.course << endl;
    cout<< "Semester: " << S1.semester << endl;

    cout<< "Student Name: " << S2.name << endl;
    cout<< "Roll Number: " << S2.rollNo << endl;
    cout<< "Course: " << S2.course << endl;
    cout<< "Semester: " << S2.semester << endl;

    cout << "Size of Student object1: " << sizeof(S1) << " bytes" << endl;
    cout << "Size of Student object2: " << sizeof(S2) << " bytes" << endl;
    cout<<"Size of Student Structure : "<<sizeof(Student)<<" bytes"<<endl;
    cout<<"Size of the Integer : "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of the String : "<<sizeof(string)<<" bytes"<<endl;

    return 0;
}