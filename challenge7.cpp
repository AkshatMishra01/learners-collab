#include<iostream>
using namespace std;
class specifier
{
    private:
    int data;
    public:
    Acessprivate():data(9)
    {
        cout<<"This is the private access.";
    }
    friend int access(Acessprivate);
};
int access(Acessprivate obj)
{
    obj.data = 5; 
    cout<<"This is the friend function "<<obj.data;
    return obj.data;
}
int main()
{
    specifier a1;
    cout<<"i am the friend function "<<access(a1);
    return 0;
}
