#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    int arr[row][col];

    int row2, col2;
    cout << "Enter the number of rows for the second matrix: ";
    cin >> row2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> col2;

    int arr2[row2][col2];

    cout<<"Enter the elements of the first matrix: " << endl;
    for(int i=0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of the matrix are: " << endl;
    
    for(int i =0; i<row; i++){
        cout<<"[";
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }

    //Multiplication of two matrices
    
    if(row != col2){
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 0;
    }

    cout<<"Enter the elements of the second matrix: " << endl;
    for(int i=0; i<row2; i++){
        for(int j = 0; j<col2; j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr2[i][j];
        }
    }

    cout<<"The elements of the second matrix are: " << endl;
    for(int i =0; i<row2; i++){
        cout<<"[";
        for(int j = 0; j<col2; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }

    //Multiplication of two matrices
    int result[row][col2];
    for(int i = 0; i< row; i++){
        for(int j = 0; j<col2; j++){
            result[i][j] = 0;
            for(int k = 0; k<col; k++){
                result[i][j] = result[i][j] + arr[i][k] * arr2[k][j];
            }
        }
    }

    //Result display    
    for(int i = 0; i<row; i++){
        cout<<"[";
        for(int j = 0; j<col2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    
    return 0;
}