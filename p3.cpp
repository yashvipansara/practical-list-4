/*Write a C++ program using array of objects to compare SPI of 10 different students and print whose SPI is highest. */
//220130318046
//pansara yashvi
#include <iostream>
#include <string>
using namespace std;
class student
{
    public:
        string name;
        double spi;
        void input()
        {
            cout<<"Enter student name :: ";
            cin>>name;
            cout<<"Enter SPI :: ";
            cin>>spi;
        }
};
int main()
{
    student s[10];
    double highestSPI = 0.0;
    int highestSPIIndex = -1;
    for (int i = 0; i < 10; ++i)
    {
        cout<<"Enter details for Student "<<i + 1<< endl;
        s[i].input();
        if (s[i].spi > highestSPI)
        {
            highestSPI = s[i].spi;
            highestSPIIndex = i;
        }
    }
    if (highestSPIIndex != -1)
    {
        cout<<"Student with the highest SPI ::"<<endl;
        cout<<"Name :: "<<s[highestSPIIndex].name<<endl;
        cout<<"SPI :: "<<s[highestSPIIndex].spi<<endl;
    }
    return 0;
}
