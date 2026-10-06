#include<iostream>
using namespace std;

struct Car{
    string BrandName;
    string modelNo;
    int buildYear;
    // struct Owner{
    //     string ownerName;
    //     unsigned long long int ownerMobNo;
    // }Owner1;
}Car1, Car2;


int main(){
    Car1.BrandName = "Toyota";
    Car1.modelNo = "A1254AFB";
    Car1.buildYear = 2001;


    Car2.BrandName = "Tata";
    Car2.modelNo = "A5846AFB";
    Car2.buildYear = 1999;

    cout<<"--------Car Details---------"<<endl;
    cout<<"...First Car..."<<endl;
    cout<<"Brand Name : "<<Car1.BrandName<<endl;
    cout<<"Model Number : "<<Car1.modelNo<<endl;
    cout<<"Maufatured Year : "<<Car1.buildYear<<endl;

    cout<<"...Second Car..."<<endl;
    cout<<"Brand Name : "<<Car2.BrandName<<endl;
    cout<<"Model Number : "<<Car2.modelNo<<endl;
    cout<<"Maufatured Year : "<<Car2.buildYear<<endl;

    return 0;

}