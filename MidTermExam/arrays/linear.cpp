//Linear Search in Array

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size){

    int target;
    cout<<"\nEnter the Target Element : ";
    cin>>target;

    bool isFound = false;

    for(int i = 0; i< size; i++ ){
        if(target == arr[i]){
            cout<<"Element found at position : "<< i<<endl;
            cout<<arr[i];
            isFound = true;
            break;
        }
    }

    return 0;
};

int main(){
    int size;
    cout<<"Enter the array Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cout<<"Enter element at "<< i + 1 <<" position : ";
        cin>>arr[i];
    }

    cout<<"Entered Array : "<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    linearSearch(arr, size);

    return 0;
}