/*Write a C++ program to calculate addition of two numbers using Friend function*/
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
class simple
{
    private:
        int num1, num2;
        friend void result(simple s);
    public:
        void get()
        {
            cout<<"Enter the first number :: ";
            cin>>num1;
            cout<<"Enter the second number :: ";
            cin>>num2;
        }
        void put()
        {
            cout<<"Frist number is :: "<<num1<<endl;
            cout<<"Second number is :: "<<num2<<endl;
        }
};
void result(simple s)
{
    int res = s.num1 + s.num2;
    cout<<s.num1<<" + "<<s.num2<<" = "<<res;
}
int main()
{
    simple sum;
    sum.get();
    sum.put();
    result(sum);
    return 0;
}
