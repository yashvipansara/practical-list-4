/*Write a C++ program to demonstrate use of Friend class.*/
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
class Square;
class Rectangle
{
 int width=5, height=6;
public:
 friend void display(Rectangle , Square );
};
class Square
{
 int side=9;
public:
 friend void display(Rectangle , Square );
};
void display(Rectangle r, Square s)
{
 cout<<"Rectangle :: "<< r.width * r.height<<endl;
 cout<<"Square :: "<< s.side * s.side;
}
int main ()
{
 Rectangle rec;
 Square sq;
 display(rec,sq);
 return 0; 
}
