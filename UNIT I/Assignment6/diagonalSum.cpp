/*
Documentation
Write a C++ program to find the sum of diagonal elements of a matrix.

Date : 18/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    int matrix[10][10];
    cout<<"Enter the Size of Matrix : ";
    cin>>size;

    if (size <= 0 || size > 10) {
        cout << "Matrix size must be between 1 and 10.";
        return 0;
    }

    
    cout << "Enter the elements of matrix:" << endl;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<"Enter the elements at index : "<<i<<" "<<j<<" : ";
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
  
    int diagonalSum = 0;
    int secDiagonalSum=0;
    for(int i=0; i<size; i++){
        //primary Diagonal
        diagonalSum+= matrix[i][i];
    }

    //Secondary Diagonal Sum
    for(int i=0; i<size; i++){
        secDiagonalSum += matrix[i][size - i - 1];

    }

    cout << "\nSum of Diagonal Elements = " << diagonalSum << endl;
        cout << "\nSum of Diagonal Elements = " << secDiagonalSum << endl;

    return 0;
}
