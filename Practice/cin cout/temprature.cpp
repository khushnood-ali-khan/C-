/*
6. Write a C++ program that takes a temperature in Fahrenheit as input and outputs 
its equivalent in Celsius. Use the formula: Celsius = (Fahrenheit - 32) * 5/9.
*/
#include<iostream>
using namespace std;
main(){
    float Fahrenheit,Celsius;
    cout<<"Enter the Fahrenheit: ";
    cin>>Fahrenheit;
    Celsius=(Fahrenheit-32)*5/9;
    cout<<"The Celsius are: "<<Celsius;
}