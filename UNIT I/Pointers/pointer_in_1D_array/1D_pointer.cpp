#include<iostream>
using namespace std;

int main(){
    int number[] = {10, 20, 30, 40, 50};
    int *p = &number[0];
    cout<<p<<endl;//0x61fef8
    cout<<*p<<endl;//10
    cout<<p+1<<endl;//0x61fefc
    cout<<*(p+1)<<endl;//20
    cout<<p+2<<endl;//0x61ff00
    cout<<*(p+2)<<endl;//30
    cout<<*(p+3)<<endl;//40
    cout<<((*p+1)+3)<<endl;//14
    cout<<(*(p+1)+3)<<endl;//23
}