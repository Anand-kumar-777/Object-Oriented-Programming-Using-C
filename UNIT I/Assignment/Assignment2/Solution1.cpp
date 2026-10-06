#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main(){

    signed char signChar = 'A';
    unsigned char unsignChar = 255;
    short signShort = 32767;
    unsigned short unsignShort = 65535;
    int signInt = 2147483647;
    unsigned int unsignInt = 4294967295;
    long signLong = 2147483647;
    unsigned long unsingLong = 4294967295;
    long long sign_long_long = 922337203685477;
    unsigned long long unsign_long_long = 1844674407370955;
    
    float f = 3.14;
    double doubleValue = 3.14159;
    long double long_double_value = 3.14159265;
    bool flag = true;

    // Table Handling
   cout<<left;
   cout<<"+-------------------------------------------------------------+"<<endl;
   cout<<"| "<<setw(10)<<"Sr.No.";
   cout<<setw(25)<<"Data Type";
   cout<<setw(25)<<"Value";
   cout<<"|"<<endl;
   cout<<"+-------------------------------------------------------------+"<<endl;

   //Display value

   cout<<"| "<<setw(10)<<"1"<<setw(25)<<"signed char"<<setw(25)<<signChar<<"|"<<endl;
   cout<<"| "<<setw(10)<<"2"<<setw(25)<<"unsigned char"<<setw(25)<<static_cast<int>(unsignChar)<<"|"<<endl;
   cout<<"| "<<setw(10)<<"3"<<setw(25)<<"short"<<setw(25)<<signShort<<"|"<<endl;
   cout<<"| "<<setw(10)<<"4"<<setw(25)<<"unsigned short"<<setw(25)<<unsignShort<<"|"<<endl;
   cout<<"| "<<setw(10)<<"5"<<setw(25)<<"int"<<setw(25)<<signInt<<"|"<<endl;
   cout<<"| "<<setw(10)<<"6"<<setw(25)<<"unsigned int"<<setw(25)<<unsignInt<<"|"<<endl;
   cout<<"| "<<setw(10)<<"7"<<setw(25)<<"long"<<setw(25)<<signLong<<"|"<<endl;
   cout<<"| "<<setw(10)<<"8"<<setw(25)<<"unsigned long"<<setw(25)<<unsingLong<<"|"<<endl;
   cout<<"| "<<setw(10)<<"9"<<setw(25)<<"long long"<<setw(25)<<sign_long_long<<"|"<<endl;
   cout<<"| "<<setw(10)<<"10"<<setw(25)<<"unsigned long long"<<setw(25)<<unsign_long_long<<"|"<<endl;
   cout<<"| "<<setw(10)<<"11"<<setw(25)<<"float"<<setw(25)<<f<<"|"<<endl;
   cout<<"| "<<setw(10)<<"12"<<setw(25)<<"double"<<setw(25)<<doubleValue<<"|"<<endl;
   cout<<"| "<<setw(10)<<"13"<<setw(25)<<"long double"<<setw(25)<<long_double_value<<"|"<<endl;
   cout<<"| "<<setw(10)<<"14"<<setw(25)<<"bool"<<setw(25)<<flag<<"|"<<endl;
   cout<<"+-------------------------------------------------------------+"<<"|"<<endl;
    return 0;

}