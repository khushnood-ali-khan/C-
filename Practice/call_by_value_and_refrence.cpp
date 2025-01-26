#include<bits/stdc++.h>
using namespace std;
void func(int &num1,int &num2)       // call by refreance
// void func(int num1,int num2)            // call by value
{
    num1++;
    num2++;
    cout<<"NUM 1 In void function: "<<num1<<endl;
    cout<<"NUM 2 In void function: "<<num2<<endl;   
}
main(){
    int num1, num2;
    cout<<"num 1: ";
    cin>>num1;
    cout<<"num 2: ";
    cin>>num2;
    cout<<"num 1 you enter: "<<num1<<endl;
    cout<<"num 2 you enter: "<<num2<<endl;
    func(num1,num2);
    cout<<"num 1 in main function: "<<num1<<endl;
    cout<<"num 2 in main function: "<<num2;
}