#include<iostream>
using namespace std;
class specifier
{
    private:
    int data;
    public:
    specifier():data(9)
    {
        cout<<"This is the private access."<<endl;
    }
    friend int access(specifier);
};
int access(specifier obj)
{
    obj.data = 5; 
    cout<<"This is the friend function "<<obj.data<<endl;
    return obj.data;
}
int main()
{
    specifier a1;
    cout<<"i am the friend function "<<access(a1)<<endl;
    return 0;
}
