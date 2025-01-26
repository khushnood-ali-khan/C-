#include<iostream>
using namespace std;
main (){
    int a,b,tem;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    tem=a;
    a=b;
    b=tem;
    cout<<"Now the first value is: "<<a<<endl;
    cout<<"Now the first value is: "<<b;
}