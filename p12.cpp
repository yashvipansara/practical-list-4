/*Write a C++ program to demonstrate use of copy constructor. */
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Rectangle
{
  public:
    int length;
    int width;
    Rectangle(int l, int w)
    {
      length = l;
      width = w;
    }
    Rectangle(const Rectangle &r)
    {
      length = r.length;
      width = r.width;
    }
    void print()
    {
      cout<<"Length is :: "<<length<<endl; 
      cout<<"Width is :: "<<width<<endl;
    }
};
int main()
{
  Rectangle r1(10, 20);
  Rectangle r2(r1);
  r1.print();
  r2.print();
  return 0;
}
