#include<bits/stdc++.h>
using namespace std;
int funct(int a, int b){
    return (a*b);
}
float funct(float a, float b){
    return (a/b);
}
main(){
    int num1, num2;
    float num3, num4;
    cout<<"Enter Num 1: ";
    cin>>num1;
    cout<<"Enter Num 2: ";
    cin>>num2;
    cout<<funct(num1,num2);
    cout<<"\nEnter Num 3: ";
    cin>>num3;
    cout<<"Enter Num 4: ";
    cin>>num4;
    cout<<funct(num3,num4);
    return 0;
}