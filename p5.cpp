/*Write a C++ program to demonstrate use of Returning Object as argument*/
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Point
{
    private:
        int x;
        int y;
    public:
        Point(int x, int y) : x(x), y(y) {}
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        // Function to add two Point objects and return a new Point object
        static Point addPoints(const Point& p1, const Point& p2)
        {
            int newX = p1.x + p2.x;
            int newY = p1.y + p2.y;
            return Point(newX, newY);
    }
};

int main()
{
    Point point1(2, 3);
    Point point2(4, 5);

    Point result = Point::addPoints(point1, point2);

    cout << "Point 1 :: " << point1.getX() << ", "<<point1.getY() << endl;
    cout << "Point 2 :: " << point2.getX() << ", " << point2.getY() << endl;
    cout << "Resulting Point :: " << result.getX() << ", " << result.getY() << endl;

    return 0;
}
