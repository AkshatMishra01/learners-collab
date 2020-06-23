#include <iostream>
using namespace std;
class base
{
public:
 virtual void function()
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
base *ptr=&obj;
ptr->function();
return 0;
}
//this is not the approriate solution  my friend, i asked u to add a line of code into the program that makes the main function call 
//function of the base class. and u added 3 lines of code along with that, when i compiled this code, i found no change in the working code
//i request u to find the solution at programiz.com for relevance.
