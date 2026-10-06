/*Write a C++ program to print the Table using the  table*/

#include<iostream>
using namespace std;

void printTable(int number, int iterator){
    if(iterator == 1 ){
        cout<<number<<" * "<<iterator<<" = "<<number * iterator<<endl;
        return;
    }
    printTable(number, iterator-1);
    cout<<number<<" * "<<iterator<<" = "<<number * iterator<<endl;

}

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
    int iterator = 10;

    printTable(number, iterator);
}
