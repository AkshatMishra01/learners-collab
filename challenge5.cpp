#include <iostream>
using namespace std;
class mom
{
public:
void function()
{
cout<<"moms features.\n";
}
};
class dad
{
public:
void function()
{
cout<<"dads features.\n";
}
};
class offspring: public mom , public dad
{
   cout<<"i am the offspring";
};
int main()
{        
offspring obj;
return 0; 
}
