#include<bits/stdc++.h>
using namespace std;
struct person{
    string name;
    int age;
};
    struct life{
        string job;
        person info;
    };

main (){
    life p1;
    cout<<"what is your name: ";
    cin>>p1.info.name;
    cout<<"Your age: ";
    cin>>p1.info.age;
    cout<<"Name: "<<p1.info.name;
    cout<<"Age: "<<p1.info.age;
}