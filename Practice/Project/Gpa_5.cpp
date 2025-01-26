#include<bits/stdc++.h>
// #include<istream>
using namespace std;

main(){
    int sub,num;
    cout<<"Enter the Total Number of Subjects you have: ";
    cin>>sub;
    string subject[sub],name;
    float credits[sub],grades[sub],total_credit,total_points,gpa;
    cin.ignore();
    cout<<"\nEnter Name of the subjects and Its Hours: "<<endl;
    for(int i=0;i<sub;i++){
        cout<<"Subject No "<<i+1<<": ";
        getline(cin,subject[i]);
        cout<<"Credit Hours: ";
        cin>>credits[i];
        cin.ignore();
        cout<<endl;
        total_credit+=credits[i];
    }
    for (int j=0;j<sub;j++){
        cout<<subject[j]<<" with "<<credits[j]<<" credits hours."<<endl;
    }
    do{
    cout<<"\nEnter the Number of GPA's you want to find: ";
    cin>>num;
    cin.ignore();
    for(int k=0;k<num;k++){
        cout<<"\nEnter Name of the Student: ";
        getline(cin,name);
        cout<<"\nEnter The Gpa Values: \n";
        total_points=0;
        for (int m = 0; m < sub; m++){
        cout<<subject[m]<<" : ";
        cin>>grades[m];
        }
        for(int o=0;o<sub;o++){
            total_points+=grades[o]*credits[o];
        }
        cout<<"\n Total point: "<<total_points<<"\n Total Hours: "<<total_credit<<endl;
        gpa=total_points/total_credit;
        cout<<"\n      Student "<<k+1<<" "<<name<<" GPA is: "<<gpa<<endl;  
        cin.ignore();
    }}while (num);
    
    system("pause");
    return 0;
}