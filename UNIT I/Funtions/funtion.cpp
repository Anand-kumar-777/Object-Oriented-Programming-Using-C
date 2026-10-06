/*
A funtion is a block of code which only run when it called
*It is resuable code
*Decomposition(Break the large problem into small)
*Less Duplication
*Esair Debugging
*Inrease Readability of program


**** The by Default return type of A function is (int)


Date : 26/08/2026
Author : Anand Kumar
Organization : CUHP
Designation : Student
*/

#include<iostream>
using namespace std;

void calArea(int length){
    cout<<"Square Area : "<<length * length<<endl;
};

int calArea(int length, int width){
    return length * width;
};

/*
Here this code indicate the function overloading.
Function Overloading : When the funtion name is same but their list of Parameter
is different
*/
int main(){
 calArea(21);
 cout<<"Reactangle Area : "<<calArea(15,23);
 return 0;
}