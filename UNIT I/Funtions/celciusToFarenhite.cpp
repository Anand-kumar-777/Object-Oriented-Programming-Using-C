/*Write a C++ program to convert the celcius to Farenhite using function*/
#include<iostream>
using namespace std;

void celToFare(int celcius){
 int farenhite;
 farenhite = (celcius * 9 / 5) + 32;
 cout<<"Temerature in Celcius to Farenhite : "<<farenhite;
}

int main(){
    int celcius;
    cout<<"Enter the Temerature in Celcius : ";
    cin>>celcius;
    celToFare(celcius);
    return 0;
}