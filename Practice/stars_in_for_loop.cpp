/* 
Write a program to print the output as given below by using the "for" loop structure and "setw" manipulator.
 ******
 *****
 ****
 ***
 **
 *
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i=1;
    for(i;i<=6;i++){
        cout<<setw(5)<<"*";
        // cout<<"*";,
        // cout<<i<<endl;
        for (i;i<=5;i++){
        cout<<setw(4)<<"*";
    }
    for (i;i<=4;i++){
        cout<<setw(3)<<"*";
    }
    for (i;i<=3;i++){
        cout<<setw(2)<<"*";
    }
    for (i;i<=2;i++){
        cout<<setw(1)<<"*"<<endl;
    }
    for (i;i<=1;i++){
        cout<<setw(4)<<"*"<<endl;
    }
    }
}