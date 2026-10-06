// int *p = makeNumber();
// foo();
// cout<<f%d,*p;
#include <iostream>
using namespace std;

int *makeNumber() {
    int x = 40;
    return &x;
}

int main(){
    int *p = makeNumber();
    int f = *p;
    cout<<*p;
    cout<<f;
}