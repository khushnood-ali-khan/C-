/*
1.  Write a C++ program that takes the base and height of a triangle as input and outputs its area.
*/
#include<iostream>
using namespace std;
int main(){
    int base,height,area;   
    // we can also use (long long) datatype in place of (int) to storge large values
    cout<<"Enter Base of the Triangle: ";
    cin>>base;
    cout<<"Enter Height of the Triangle: ";
    cin>>height;
    area=base*height/2;
    cout<<"The Area of A Triangle is "<<area;
}