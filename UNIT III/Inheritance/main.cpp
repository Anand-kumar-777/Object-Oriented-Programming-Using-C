/*Inheritance in core concept of OOPs that allows to
new class to accquire the data members and member function of class
Date : 23-09-2026
Author : Anand Kumar
Organization : CUHP
*/
#include <iostream>
using namespace std;

class Book
{
    public:
    string title;
    string author;
    void display(){
        cout<<title <<" is very famous book which is written by : "<<author<<" ."<<endl;
    }
};

class Student : public Book{
    public:
    string feed;
    void displayFeed(){
        cout<<"According to auidence "<<title<< " is very good book."<<endl;
    }
};

int main()
{
    Student S;
    S.title = "Deewar me ek Khidki Rahti Thi";
    S.author = "Fadhiswar Nath Renu";
    S.display();
    S.displayFeed();
    return 0;
}