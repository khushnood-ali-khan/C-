/*
3. Write a C++ program that takes three floating-point numbers as input and outputs their average.
*/
#include<iostream>
using namespace std;
main(){
    double value1,value2,value3,average;
    cout<<"Enter the First Decimal Value: ";
    cin>>value1;
    cout<<"Enter the Second Decimal Value: ";
    cin>>value2;
    cout<<"Enter the Third Decimal Value: ";
    cin>>value3;
    average=value1+value2+value3/3;
    cout<<"The Avgerage of the Values are: "<<average;
}