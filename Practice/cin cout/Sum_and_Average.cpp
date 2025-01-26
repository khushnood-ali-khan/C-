/*
2. Write a C++ program that takes five integers as input and outputs their sum and average.
*/
#include<iostream>
using namespace std;
int main()
{
    double integer1,integer2,integer3,integer4,integer5;
    // we have use (double) datatype because integer's, sum and average may have decimal point
    // we can use (float) datatype but it have (value storing limitation)
    // (float) store 6-7 decimal digit's and (double) store's 15 decimal digit's
    double sum,average;
    cout<<"Enter the First Value: ";
    cin>>integer1;
    cout<<"Enter the Second Value: ";
    cin>>integer2;
    cout<<"Enter the Third Value: ";
    cin>>integer3;
    cout<<"Enter the Fourth Value: ";
    cin>>integer4;
    cout<<"Enter the Fifth Value: ";
    cin>>integer5;
    sum=integer1+integer2+integer3+integer4+integer5;
    average=sum/5;
    cout<<"The Sum of the Values are: "<<sum<<endl;
    cout<<"The Average of the Values are: "<<average;
}
