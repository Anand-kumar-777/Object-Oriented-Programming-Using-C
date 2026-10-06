/*Write a C++ program using nested loops to print a diamond star pattern.

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

Date : 07/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
   int rows;
   cout<<"Enter your Diamond row number : ";
   cin>>rows;

   for(int i=1; i<=rows; i++){ //Outer loop
      //first inner loop to print the space
      for(int j=1; j<=(rows-i); j++){
        cout<<" ";
      }

      //Second inner loop to print the stars
      for(int k = 1; k<=(2 * i)-1; k++){
        cout<<"*";
      }
      cout<<endl;
   }

   //Second to reverse the pattern
   for(int i=rows; i>=1; i--){ //Outer loop
      //first inner loop to print the space
      for(int j=1; j<=(rows-i); j++){
        cout<<" ";
      }

      //Second inner loop to print the stars
      for(int k = 1; k<=(2 * i)-1; k++){
        cout<<"*";
      }
      cout<<endl;
   }
}