/*Write a C++ program to demonstrate use of Parameterized Constructor*/
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Rectangle
{
  private:
    int length;
    int breadth;
  public:
    Rectangle(int l, int b)
    {
      length = l;
      breadth = b;
    }
    int getArea()
    {
      return length * breadth;
    }
};

int main()
{
  Rectangle r(10, 20);
  cout << "The area of the rectangle is " << r.getArea() << endl;
  return 0;
}
