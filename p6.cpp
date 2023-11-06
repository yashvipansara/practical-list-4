/*Write a C++ program to calculate difference between Manufacture year and expiry year using pass object as function argument*/
//220130318046
//pansara yashvi
#include <iostream>
using namespace std;
class Item
{
    public:
        int year;
        int expire;
        Item(int manufacture, int expiry) :  year(manufacture), expire(expiry) {}
};
int between(const Item & item)
{
    return item.expire - item.year;
}
int main()
{
    int year, expire;
    cout<<"Enter the manufcture year :: ";
    cin>>year;
    cout<<"Enter the expiry year :: ";
    cin>>expire;
    Item item(year, expire);
    int difference = between(item);
    cout<<"Difference between manufcture year and expiry year is ::"<<difference<<" year";
}
