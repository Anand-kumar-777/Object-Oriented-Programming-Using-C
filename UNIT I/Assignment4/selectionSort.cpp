/*
Documetation
Write a C++ program to sort an array using the Selection Sort Algorithm

Date : 16/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of Your Array Element : ";
    cin>>size;
    int elements[100];
    if(size<=0 || size>100){
        cout<<"Size must be in between 1 to 100.";
        return 0;
    }

    for(int i = 0; i<size; i++){
        cout<<"Enter the element at index "<<i<<" : ";
        cin>>elements[i];
    }
    
    cout<<"Stored elements in your Array : ";
    for(int i=0; i<size; i++){
        cout<<elements[i]<<" ";
    }

    for(int i=0; i<size - 1; i++){
        int minPositionVal = i;
        for(int j = i+1; j<size; j++){
            if(elements[minPositionVal]> elements[j]){
                minPositionVal = j;
            }
        }
        int temp = elements[minPositionVal];
        elements[minPositionVal] = elements[i];
        elements[i] = temp;
    };

    //Displaying the Sorted Array
    cout<<"\nSorted Array Elements : ";
    for(int i=0; i<size; i++){
        cout<<elements[i]<<" ";
    }

    return 0;
}