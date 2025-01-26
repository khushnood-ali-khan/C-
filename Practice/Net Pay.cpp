#include<iostream>
using namespace std;
int main(){
    int pay,rent,med,allo,net;
    cout<<"Enter Your Basic Pay: ";
    cin>>pay;
    rent=pay*45/100;
    if (pay>5000){
        med=pay*2/100;
        allo=193;
    }
    else {
        med=pay*5/100;
        allo=96;
    }
    net=pay+rent+med+allo;
    cout<<"Net pay is: "<<net;
    
}