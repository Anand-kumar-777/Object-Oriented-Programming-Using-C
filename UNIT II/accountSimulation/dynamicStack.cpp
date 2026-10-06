#include<iostream>
using namespace std;

class Stack{
    private:
    int *arr;
    int capcity;
    int top;
    public:
    Stack(int size){    
        capcity = size;
        arr = new int[capcity];//Dynamic Size of Stack will be created
        top = -1;
    }

    //Push operation
    void push(int value){
        if(top == capcity-1){
            cout<<"Stack Overflow: Cannot push "<<value<<endl;
            return;
        }
        
        arr[++top] = value;
        cout<<"Pushed "<<value<<" into stack"<<endl;
    };

    void display(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<"Stack elements: ";
        for(int i = 0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){

    int size;
    cout<<"Enter the size of stack: ";
    cin>>size;
    Stack S(size);

    for(int i = 0; i<size; i++){
        int value;
        cout<<"Enter value to push into stack: ";
        cin>>value;
        S.push(value);
    }
    S.display();
}