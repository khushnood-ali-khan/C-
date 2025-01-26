#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    void printinfo(){
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your age is: "<<age<<endl;
        cout<<"Your gender is: "<<gender<<endl;

    }
};
int main(){
    student array[5];
    for(int i=1;i<=3;i++){
        cout<<"\nEnter your name: ";
        cin>>array[i].name;
        cout<<"\nEnter your age: ";
        cin>>array[i].age;
        cout<<"\nEnter your gender: ";
        cin>>array[i].gender;
    }
    for(int j=1;j<=3;j++){
        array[j].printinfo();
        cout<<endl;
    }
}