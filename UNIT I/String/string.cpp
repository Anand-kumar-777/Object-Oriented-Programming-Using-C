/*Documentation
Write a c++ code to print the String literals
Author : Anand Kumar
Date : 21/08/2026
Organization : CUHP
Designation : Student
*/

#include<iostream>
using namespace std;

int main(){
 string name = "Central University of Himachal Pradesh";
 for(int i=0; i<name.size(); i++){
    cout<<name[i]<<" ";
 }

 string duplicate = "";

 for(int j=0; j<name.size(); j++){
     for(int k=j+1; k<name.size()-1; k++){
        if(name[j] == name[k]){
            duplicate = name[j];
        }
    }
 }

 cout<<"Duplicate character : "<<duplicate<<" ";
 return 0;
}