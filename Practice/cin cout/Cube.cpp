/*
5. Write a C++ program that takes an integer as input and outputs the cube of that number.
*/
#include<iostream>
using namespace std;
main (){
    int n,cube;
    cout<<"Enter an Integer: ";
    cin>>n;
    cube=n*n*n;
    cout<<"The Cube of The Integer as: "<<cube;
}