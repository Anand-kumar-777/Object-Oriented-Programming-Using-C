/*
Documentation
Write a C++ program using nested loops to print a rhombus / parallelogram star pattern.
* * * *
 *     *
  *     *
   * * * *  
Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Number of Rows of Patter : ";
    cin>>number;

    for(int i = 1; i<=number; i++){
        //Inner loop to print the Space before star
        for(int j = 1; j<=i-1; j++){
            cout<<" ";
        }

        //Second inner loop to print the Star
        for(int k = 1; k<=number; k++){
            if(i == 1 || i == number || k ==1 || k == number){
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;

}