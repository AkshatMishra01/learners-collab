#include<iostream>
using namespace std;
class basic
{
public:
basic(int a)
{
cout<<"This is the first  copy constructor, a ="<<a<<endl;
}
basic(int x,int y)
{
cout<<"overloaded constructor"<<endl;
}
basic()
{
cout<<"This is the copy constructor"<<endl;
}
void display()
{
    return ;
}
};

int main()
{
    int a=20;
    
basic obj1(a),obj2(3,4),obj3;
obj1.display();
obj2.display();
obj3.display();

return 0;
}
