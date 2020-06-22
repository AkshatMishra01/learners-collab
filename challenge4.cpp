#include <iostream>
using namespace std;
class base
{
public:
void function()
{
cout<<"This is the first function";
}
};
class derived: public base
{
public:
void function()
{
cout<<"This is the function of the derived class";
}
};
int main()
{
derived obj;
obj.function();
return 0;
}
