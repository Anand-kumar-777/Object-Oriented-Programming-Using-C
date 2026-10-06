/*Documentation
Write a C++ programm to on Binary Search to find an element using the user input

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of your array : ";
    cin>>size;
    int foundIndex = -1;
    int elements[100];
    if(size <= 0 || size > 100){
        cout<<"Please enter the a size between 1 to 100.";
        return 0;
    }

    for(int i = 0; i<size; i++){
        cout<<"Please enter your element in Ascending Order in index at : "<<i<<" : ";
        cin>>elements[i];
    }

    cout<<"Stored elements : ";
    for(int i = 0; i<size; i++){
        cout<<elements[i]<<" ";
    }

    int targetNumber;
    cout<<"Enter your target Number : ";
    cin>>targetNumber;
    int min = 0;
    int max = size -1;
    int mid;

    for(int i = 0; i<size; i++){
        mid = (min + max)/2;
        if(elements[mid] == targetNumber){
            foundIndex = mid;
            break;
        } else if(elements[mid] < targetNumber){
            min = mid + 1;
        } else{
            max = mid -1;
        }
    }

    if(foundIndex != -1){
        cout<<"Target element found at index : "<<foundIndex;
    } else{
        cout<<"Target element does not exist.";
    }

    return 0;
}