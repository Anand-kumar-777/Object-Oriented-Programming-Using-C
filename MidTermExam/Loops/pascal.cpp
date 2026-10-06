/*Create a Pascal's Triangle using loops in C++
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include<iostream>
using namespace std;
int main(){
    int term;
    cout<<"Enter the no of Term of the Pascal Triangle : ";
    cin>>term;
    for(int i = 0; i<term; i++){
        for(int j = 0; j<term - i ; j++){
            cout<<" "; 
        }
        int value = 1;
            for(int k = 0; k<i+1; k++){
                cout<<value<<" ";
                value = value * (i-k)/(k+1);
            }
        cout<<endl;
        
    }
    return 0;
}