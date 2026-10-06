/* Docuementation:
Write a C++ program using nested loops to print a right-angled triangle star pattern of N rows.

Date - 06-08-2026
Author - Anand Kumar
*/


#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}