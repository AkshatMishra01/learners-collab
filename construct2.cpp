#include<iostream>
using namespace std;
class perimeter
{
private:
int x=4 , y=9;
public:
perimeter():x(4),y(9){}
void getx()
{
cout<<"this is the function to input x";
cin>>x;
}
void gety()
{
cout<<"this is the function to input y";
cin>>y;
}
int perimeter()
{
return (x*y);
}
};
int main()
{
perimeter obj1,obj2;
obj1.getx();
obj1.gety();
cout<<"The perimeter of the rectangle is:"<<obj1.perimeter()<<endl;
cout<<"The default inputs given are"<<x<<","<<y;
obj2.perimeter();
return 0;
}
