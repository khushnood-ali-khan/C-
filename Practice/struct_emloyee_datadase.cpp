#include<bits/stdc++.h>
using namespace std;
struct employee{
    string name,address,age;
    int employees=0;
};
main(){
        employee num;
    cout<<"Enter the number of employees: ";
    cin>>num.employees;
    cin.ignore();
        struct employee data[num.employees];
        for(int i=0; i<num.employees; i++){
            cout<<"\nEnter Your Name: ";
            getline(cin,data[i].name);
            cout<<"Enter Your Age: ";
            // cin.ignore();
            cin>>data[i].age;
            cin.ignore();
            cout<<"Enter Your Address: ";
            getline(cin,data[i].address);
            // cin.ignore();
        }
        cout<<"DATA OF EMLOYEES:"<<endl;
        for(int i=0; i<num.employees; i++){
            cout<<"\nEmployee No# "<<i+1<<endl;
            cout<<"Name: "<<data[i].name<<endl;
            cout<<"Age: "<<data[i].age<<endl;
            cout<<"Address: "<<data[i].address<<endl;
        }

}