#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i =1; i<size; i++){
        if(arr[i]> largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    cout<<"The second largest number is: "<<secondLargest<<endl;
    return 0;
}