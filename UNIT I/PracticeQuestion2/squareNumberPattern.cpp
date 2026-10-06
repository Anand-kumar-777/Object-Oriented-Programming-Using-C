/*Documentation
Write a C++ program using nested loops to print a square number pattern (same number in each row).

Date : 13/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number of Rows : ";
    cin>>number;

    for(int i = 1; i<=number; i++){
        //inner loop to print the number
        
        for(int j = 1; j<=number; j++){
            cout<<i<<" ";
            
            
        }
        
        cout<<endl;
    }

    return 0;
}