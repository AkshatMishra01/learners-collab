#include <iostream>
using namespace std;
class mom
{
   private:
int a;
public:
void get_function1(int n)
{
a=n;
}
};
class dad
{
public:
void get_function2(int n)
{
 b=n;  
}
};
class offspring: public mom , public dad
{
public:
void display()
{
cout<<"moms features\n"<<endl;
cout<<"dads features\n"<<endl;
   cout<<"i am the offspring"<<endl;
}
};
int main()
{        
offspring obj;
   obj.get_function();
   obj.get_function();
   obj.display();
   
return 0; 
}
