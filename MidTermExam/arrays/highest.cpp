#include<iostream>
using namespace std;

int main(){
    int data[] = { 10,12,14,14,16,18,20};
    int length = sizeof(data)/sizeof(data[0]);

    int largest = data[0];
    for(int i =1; i<length; i++){
        if(data[i] > largest){
            largest = data[i];
        }
    }
    cout << "The largest number is: " << largest << endl;
    return 0;    
}