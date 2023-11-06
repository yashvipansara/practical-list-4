/*Write a C++ program to demonstrate use of Default Constructor*/
//220130318046
//pansara yashvi
#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
        string name;
        int rol;
    student()
    {
        cout<<"Enter the your name :: ";
        getline(cin,name);
        cout<<"Entr the your Enrollmentname :: ";
        cin>>rol;
        cin.ignore();
    }
    void put()
    {
        cout<<"Your name is :: "<<name<<endl;
        cout<<"Your enrollment number :: "<<rol<<endl;
    }
};
int main ()
{
    student s1,s2;
    s1.put();
    s2.put();
    return 0;
}
