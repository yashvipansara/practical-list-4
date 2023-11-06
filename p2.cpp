/*Write a C++ program that create a class – ‘Employee’ that has data members emp_id & emp_name and member function are getdata()[to input data] & putdata() [to output data]. Write a main function to create emp, an array of Empoyee objects. Accept and display the details of at least 10 employees. */
//220130318046
//pansara yashvi
#include<iostream>
#include<string>
using namespace std;
class emp
{
    private:
        string emp_name;
        int emp_id;
    public:
        void get_data()
        {
          
            cout<<"Enter the emoloyee name :: ";
            getline(cin,emp_name);
            cout<<"Enter the employee id :: ";
            cin>>emp_id;
            cin.ignore();
           
        }
        void put_data()
        {
            cout<<"\nEmployee name is :: "<<emp_name<<endl;
            cout<<"Employee id is :: "<<emp_id<<endl;
        }
};
int main()
{
    emp e[10];
    for(int i=0; i<10; i++)
    {
        cout<<i+1<<" Employee "<<endl;
        e[i].get_data();
    }
    for(int i=0; i<10; i++)
    {
        cout<<i+1<<" Employee detail ";
        e[i].put_data();
    }
    return 0;
}
