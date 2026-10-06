#include<iostream>
using namespace std;

class Box{
    private:
    int width;
    public:
    Box(int w){
        width = w;
    }

    //Friend Function will access of the Box
    friend void display(Box b);
};

void display(Box b){
    cout<<"Width is "<<b.width<<endl;
}

int main(){
    Box b(10);
    display(b);
    return 0;
}