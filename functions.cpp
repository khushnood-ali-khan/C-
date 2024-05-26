#include<bits/stdc++.h>
using namespace std;

//return-type name-of-function (argument or parameters);
int sum(int a, int b);      //decliration or prototype
main(){
    int num1=40, num2=20;
    cout<<"Sum of 40 and 20 is: "<<sum(num1, num2); //call by value and calling function
    return 0;
}
int sum(int a, int b){          //function definition
    return (a+b);
}