/*
Writing a C++ program where user will provide the string in input and we will
count the total elelment and display the every letters
/
Date : 25/08/2026
Author : Anand Kumar
*/

#include<iostream>
#include<string>
using namespace std;

void printString(){
  string name = "Ram Ram ji/0";
  cout<<"String length : "<<name.length();
};

int main(){
    string word;
    cout<<"Enter your word : ";
    getline(cin,word);
    cout<<"Your input word was : "<<word<<endl;
    int totalLength = word.length();
    for(int i = 0; i<totalLength; i++){
        cout<<word[i]<<" ";
    }
    cout<<"\nTotal Word length : "<<totalLength<<endl;

    printString();
}