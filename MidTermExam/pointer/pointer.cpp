#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int *ptr = &num;
    //Basic pointer operations
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout<< "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    cout<<(*ptr)++<<endl;//Deference the pointer and increment the value it points to
    cout<<*ptr<<endl;
    cout<<++(*ptr)<<endl;//preincrement
    cout<<*ptr<<endl;
    cout<<(++(*ptr) + (*ptr)+1)<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(num)<<endl;

    *ptr = 20; //Changing the value of num using pointer
    cout << "New value of num: " << num << endl;
    cout<<*ptr<<endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr; //Pointer to the first element of the array
    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++){
        cout << *(arrPtr + i) << " "; //Accessing array elements using pointer arithmetic
    }
    cout<<endl;

    cout<<*(arrPtr + 2)<<endl; //Accessing the third element of the array using pointer arithmetic
    cout<<(*arrPtr +1)  <<endl; //Accessing the first element of the array and adding 1 to it
    cout<<*(arrPtr+1)  <<endl; //Accessing the second element of the array using pointer arithmetic
    cout<<*(arrPtr+2)<<endl;
    cout<<*(arrPtr+3)<<endl;
    cout<<(*arrPtr + 3)<<endl; //Accessing the first element of the array and adding 3 to it
    cout<<(*(arrPtr+4)+4)<<endl;
}