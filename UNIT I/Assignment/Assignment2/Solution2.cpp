#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main(){

    signed char ch;
    unsigned char unsignChar;
    short signShort;
    unsigned short unsignShort;
    int signInt;
    unsigned int unsignInt;
    long signLong;
    unsigned long unsignLong;
    long long sign_long_long;
    unsigned long long unsign_long_long;
    float f ;
    double double_value ;
    long double long_double_value ;
    bool flag;

    // Table Handling
   cout<<left;
   cout<<"+-------------------------------------------------------------------------------------------------------+"<<endl;
   cout<<"| "<<setw(10)<<"Sr.No.";
   cout<<"| "<<setw(20)<<"Data Type";
   cout<<" | "<<setw(10)<<"Memory(Bytes)";
   cout<<"|  "<<setw(25)<<"Min_Range";
   cout<<"|"<<setw(25)<<"Max_Range"<<"| "<<endl;
   cout<<"+-------------------------------------------------------------------------------------------------------+"<<endl;


cout<<"| "<<setw(10)<<"1"<<"| "<<setw(20)<<"signed char"<<" | "<<setw(10)<<sizeof(ch)<<"   |  "<<setw(25)<<(int)numeric_limits<signed char>::min()<<"| "<<setw(24)<<(int)numeric_limits<signed char>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"2"<<"| "<<setw(20)<<"unsigned char"<<" | "<<setw(10)<<sizeof(unsignChar)<<"   |  "<<setw(25)<<(int)numeric_limits<unsigned char>::min()<<"| "<<setw(24)<<(int)numeric_limits<unsigned char>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"3"<<"| "<<setw(20)<<"short"<<" | "<<setw(10)<<sizeof(signShort)<<"   |  "<<setw(25)<<(int)numeric_limits<signed short>::min()<<"| "<<setw(24)<<(int)numeric_limits<signed short>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"4"<<"| "<<setw(20)<<"unsigned short"<<" | "<<setw(10)<<sizeof(unsignShort)<<"   |  "<<setw(25)<<(int)numeric_limits<unsigned short>::min()<<"| "<<setw(24)<<(int)numeric_limits<unsigned short>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"5"<<"| "<<setw(20)<<"int"<<" | "<<setw(10)<<sizeof(signInt)<<"   |  "<<setw(25)<<(int)numeric_limits<signed int>::min()<<"| "<<setw(24)<<(int)numeric_limits<signed int>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"6"<<"| "<<setw(20)<<"unsigned int"<<" | "<<setw(10)<<sizeof(unsignInt)<<"   |  "<<setw(25)<<numeric_limits<unsigned int>::min()<<"| "<<setw(24)<<numeric_limits<unsigned int>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"7"<<"| "<<setw(20)<<"long"<<" | "<<setw(10)<<sizeof(signLong)<<"   |  "<<setw(25)<<numeric_limits<long>::min()<<"| "<<setw(24)<<numeric_limits<long>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"8"<<"| "<<setw(20)<<"unsigned long"<<" | "<<setw(10)<<sizeof(unsignLong)<<"   |  "<<setw(25)<<numeric_limits<unsigned long>::min()<<"| "<<setw(24)<<numeric_limits<unsigned long>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"9"<<"| "<<setw(20)<<"long long"<<" | "<<setw(10)<<sizeof(sign_long_long)<<"   |  "<<setw(25)<<numeric_limits<long long>::min()<<"| "<<setw(24)<<numeric_limits<long long>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"10"<<"| "<<setw(20)<<"unsigned long long"<<" | "<<setw(10)<<sizeof(unsign_long_long)<<"   |  "<<setw(25)<<numeric_limits<unsigned long long>::min()<<"| "<<setw(24)<<numeric_limits<unsigned long long>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"11"<<"| "<<setw(20)<<"float"<<" | "<<setw(10)<<sizeof(f)<<"   |  "<<setw(25)<<numeric_limits<float>::min()<<"| "<<setw(24)<<numeric_limits<float>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"12"<<"| "<<setw(20)<<"double"<<" | "<<setw(10)<<sizeof(double_value)<<"   |  "<<setw(25)<<numeric_limits<double>::min()<<"| "<<setw(24)<<numeric_limits<double>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"13"<<"| "<<setw(20)<<"long double"<<" | "<<setw(10)<<sizeof(long_double_value)<<"   |  "<<setw(25)<<numeric_limits<long double>::min()<<"| "<<setw(24)<<numeric_limits<long double>::max()<<"|"<<endl;
cout<<"| "<<setw(10)<<"14"<<"| "<<setw(20)<<"bool"<<" | "<<setw(10)<<sizeof(flag)<<"   |  "<<setw(25)<<numeric_limits<bool>::min()<<"| "<<setw(24)<<numeric_limits<bool>::max()<<"|"<<endl;

cout<<"+-------------------------------------------------------------------------------------------------------+"<<endl;
    return 0;

}