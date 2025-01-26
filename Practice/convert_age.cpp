#include<iostream>
using namespace std;
int main(){
    int age;
    long long months=12,days=365,hours=8760,min=525600,secound=31536000;
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<"Your Age in Month's: "<<age*months<<endl;
    cout<<"Your Age in Days: "<<age*days<<endl;
    cout<<"Your Age in Hours: "<<age*hours<<endl;
    cout<<"Your Age in Minutes: "<<age*min<<endl;
    cout<<"Your Age in Secound's: "<<age*secound<<endl;
}