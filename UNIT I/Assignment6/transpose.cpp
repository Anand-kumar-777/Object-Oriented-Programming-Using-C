/*Documentation
Write a c++ program to Transpose of a 2D matrix

Date : 16/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int rowSize, colSize;
    cout<<"Enter the Size of Row of Matrix : "<<endl;
    cin>>rowSize;
    cout<<"Enter the Size of Column of Matrix : "<<endl;
    cin>>colSize;

    int matrix[10][10];  //Maximum Size defined
    int transpose[10][10];

    if(rowSize <= 0 || colSize <= 0 || rowSize > 10 || colSize > 10){
    cout << "Matrix size must be between 1 and 10.";
    return 0;
}

    //Input of Matrix
    cout<<"Enter the Elements in your matrix : "<<endl;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
          cout<<"Enter the elements at index : "<<i<<" "<<j<<" : ";
          cin>>matrix[i][j];
        }
    }

    //Displaying the Original Matrix
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //Transpose of Matrix
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    //Displaying the Transpose of Matrix
    cout<<"Transpose of Matrix : "<<endl;
    for(int i=0; i<colSize; i++){
        for(int j=0; j<rowSize; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}