#include<iostream>
using namespace std;
class basic
{
public:
int a= 20;
basic(int a)
{
cout<<"This is the first  copy constructor, a ="<<a;
}
basic(int x,int y)
{
cout<<"overloaded constructor";
}
basic()
{
cout<<"This is the copy constructor";
}
};
int main()
{
basic obj1,obj2(3,4);
obj1.basic();
obj2.basic();
basic obj2(obj3);
obj3.basic();
return 0;
}
