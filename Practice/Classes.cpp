#include<bits/stdc++.h>
using namespace std;
class data {
    string  name, fathername;
    int age, rollno;
    public:
    void fun (){
        cout<<"Enter Your Name: ";
        cin>>name;
        cout<<"Enter Your Father Name: ";
        cin>>fathername;
        cout<<"Enter Your Age: ";
        cin>>age;
        cout<<"Enter Your RollNo: ";
        cin>>rollno;
    }
    int show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Father Name: "<<fathername<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ROll No: "<<rollno<<endl;
    }
};
main(){
    data stu[3];
    for (int i = 1; i <= 3; i++){
    stu[i].fun();
    stu[i].show();
    }
    return 0;
}