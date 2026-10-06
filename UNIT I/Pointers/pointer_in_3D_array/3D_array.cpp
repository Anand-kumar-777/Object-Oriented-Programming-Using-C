/*Documentation
Write a c++ program to find assign the memory in 3D matrix using the Point-pointer-pointer
Date : 20/08/2026
Author : Anand Kumar
Organization : CUHP
Designation : Student
*/

#include<iostream>
using namespace std;

int main(){
    int layer, rowSize, colSize;
    cout<<"Enter the matrix layer : ";
    cin>>layer;
    cout<<"Enter the RowSize of the matrix : ";
    cin>>rowSize;
    cout<<"Enter the ColSize of the matrix : ";
    cin>>colSize;
    int matrix[layer][rowSize][colSize];
    

    for(int i = 1; i<= layer; i++){
        cout<<"Enter the value in layer "<<layer<<" : ";
        for(int j = 0; j<rowSize; j++){
            for(int k=0; k<colSize; k++){
              cout<<"Enter the value at index "<<j<<" "<<k<<" : ";
              cin>>matrix[j][k];
            }
        }
    }

    //Value Display
    for(int i = 1; i<= layer; i++){
        for(int j = 0; j<rowSize; j++){
            for(int k=0; k<colSize; k++){
              cout<<"Value at index "<<j<<" "<<k<<" : ";
            }
        }
        cout<<endl;
    }

}