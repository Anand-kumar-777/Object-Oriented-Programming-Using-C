//Write a C++ program to print all prime numbers between 1 and 100 using a loop.
#include<iostream>
using namespace std;

int main(){
    int start, end;
    cout<<"Enter the Starting range of prime : ";
    cin>>start;
    cout<<"Enter the Ending range of prime : ";
    cin>>end;

    for(int i = start; i<=end; i++){
        bool isPrime = true;
        if(i <= 1){
            isPrime = false;
        } else {
            for(int j = 2; j <= i/2; j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
}