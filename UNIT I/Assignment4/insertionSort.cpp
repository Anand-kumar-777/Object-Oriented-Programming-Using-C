/*
Documetation
Write a C++ program to sort an array using the Insertion Sort Algorithm

Date : 16/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array elements : ";
    cin>>size;
    int elements[100];
    if(size<=0 || size> 100){
        cout<<"Enter the size between 1 to 100.";
    }

    for(int i=0; i<size; i++){
        cout<<"Enter the elements at index "<<i<<" : ";
        cin>>elements[i];
    }

    //Displaying the elements
    cout<<"Stored elements in array : ";
    for(int i=0; i<size; i++){
        cout<<elements[i]<<" ";
    }

    for(int i=1; i<size; i++){
        int key = elements[i];  // Second position value accessed
        int j = i-1;  // 1-1 = 0 // First Index
        while(j>=0 && elements[j]>key){  
            elements[j+1] = elements[j];  //Swapped the elements at first position to Second Position
            j--;  //Descresing the Index
        }
        elements[j+1] = key;  // If Control flow flase the do this// Assigned the key value at Second position

    }

    cout<<"\nSorted Elements : ";
    for(int i = 0; i<size; i++){
        cout<<elements[i]<<" ";
    }

    return 0;
}