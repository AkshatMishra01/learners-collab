#include<iostream>
using namespace std;
class database
{
private:
int a=4,b=5,c;
public:
database();
{
cout<<"This is a constructor";
  c = a+b;
  cout<<"sum="<<c;
}
};
int main()
{
database  obj1;
obj1.database();
return 0;
}
