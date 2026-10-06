/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Triangle Length : ";
    cin>>number;

    for(int i = 1; i<=number; i++){
        for(int j = 1; j<=number-i; j++){
            cout<<" ";
        }
        int value = 1;
        for(int k = 1; k<=(i * 2) - 1; k++){
            cout<<value<<" ";
            value = value * ((i - k)+1);
        }
        cout<<endl;
    }
}