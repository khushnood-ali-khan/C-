#include<bits/stdc++.h>
using namespace std;
class gpa{
    int no_gpa, no_sub = 0;
    float gpa;
    public:
void fun1(){
    cout<<"How Many subject do you have: ";
    cin>>no_sub;
    string sub_names[no_sub];
    float credits[no_sub];
    cout<<"Enter your Subjects and Credits: \n";
    for(int i = 0; i < no_sub; i++){
        cout<<"Subject no "<<i+1<<" : ";
        cin>>sub_names[i];
        cout<<"Credits: ";
        cin>>credits[i];
    }
    gpa_no(sub_names[no_sub], credits[no_sub]);
}
int gpa_no(string sub_names, float credits){
    cout<<"Enter the number of GPA's You want to find: ";
    cin>>no_gpa;
    cin.ignore();
    string stu_names[no_gpa];
    for(int j =0; j > no_gpa; j++){
        cout<<"\nEnter the name of the student: ";
        getline(cin,stu_names[j]);
        cout<<"\n Enter your gpa values:\n";
        for(int i =0; i < no_sub; i++){
        cout<<sub_names[i]<<": ";
        cin>>gpa;
        }
    }
}
};
main(){
    gpa points;
    points.fun1();
    points.gpa_no();

}