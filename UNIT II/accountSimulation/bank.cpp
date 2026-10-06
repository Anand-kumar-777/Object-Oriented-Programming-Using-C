/*Write a program to implement Stack using class and object
Author : Anand Kumar
Date : 07/09/2026
Organization : CUHP
Designation : Student
*/

#include <iostream>
using namespace std;

class Stack{
    private:
    int top;
    int stack[5];
    public:
    Stack(){
        top = -1;
    }
    //Push function to add an element to the stack
    void push(int value){
        if(top>=4){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            stack[top] = value;
            cout<<value<<" pushed to stack"<<endl;
            return;
        }
    }

    //Pop Function to remove the element from the Stack
    void pop(int value){
        if(top == -1){
            cout<<"Stack is Undeflow"<<endl;
            return;
        }
            cout<<stack[top]<<" Pop from the stack."<<endl;
            top--;
    }

    void display(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
       cout<<"Stack elements are: ";
        for(int i = top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
    }
};

int main(){
    Stack S;
    for (int i = 1; i<=5; i++){
        S.push(i);
    }
    S.pop(5);
    S.display();
}
