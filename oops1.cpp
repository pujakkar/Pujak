#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int age;
    int gender;
    student(){                                     //default constructor
        cout<<"default constructor"<<endl;
    }
    student(string s, int a, int g){
        cout<<"parameterised contructor"<<endl;   //parameterised constructor
        name=s;
        age=a;
        gender=g;
    }
    student(student &a){ 
        cout<<"copy constructor"<<endl;           //copy constructor
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    bool operator ==(student &a){                 //operator overloading
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
    }
    void printinfo(){
        cout<<"name is= ";
        cout<<name<<endl;
        cout<<"age is= ";
        cout<<age<<endl;
        cout<<"gender is= ";
        cout<<gender<<endl;
    }
};
int32_t main(){
    student a("pujak", 19,1);
    a.printinfo();
    student b;
    student c=a;
    c.printinfo();
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}