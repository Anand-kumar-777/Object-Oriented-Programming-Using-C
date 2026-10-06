/*Documentation
Write a C++ program using nested loops to print a Christmas tree / increasing-decreasing star pattern.
     *
    ***
   *****
  *******
 *********
***********
    ***
    ***

Date : 13/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int height;
    cout<<"Enter the Height of your Tree : ";
    cin>>height;
     int trunkHeight;
    cout<<"Enter your trunk Height for your Tree : ";
    cin>>trunkHeight;

    //Part 1 for Height
    for(int i = 1; i<=height; i++){
        //Loop for space print
        for(int j = 1; j<=height - i; j++){
            cout<<" ";
        }

        //Loop for print the star
        for(int k = 1; k<=(2 * i - 1); k++){
            cout<<"*";
        }
        cout<<endl;
    }


   //Part 2 for trunk Height
   

    for(int i=1; i<=trunkHeight; i++){
         for(int j = 1; j<=height - 2; j++){
            cout<<" ";
        }
        
        //Loop for Star
        for(int k = 1; k<=3; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}