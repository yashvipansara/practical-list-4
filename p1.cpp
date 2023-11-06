//Write a C++ program that create a class – ‘Employee’ that has data members emp_id & emp_name and member function are getdata() [to input data] & putdata() [to output data]. Write a main function to create emp, an array of Empoyee objects. Accept and display the details of at least 10 employees. 
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
class employee
{
   private :
   	  	string emp_name;
   	  	int emp_id;
   
   public  :
   		void get_data()
   		{
			cout<<"enter your employee name::";
			cin>>emp_name;
			cin.ignore(); 
			
			cout<<"enter your employee id::";
			getline(cin,emp_id);
			
    	}
    	void put_data()
    	{
    		cout<<"your employee name is::"<<emp_name<<endl;
    		cout<<"your employee id is::"<<emp_id<<endl;
		}
};

int main()
{
	employee s1;
	s1.get_data();
	s1.put_data();
	return 0;
}
