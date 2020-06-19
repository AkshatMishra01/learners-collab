#include<iostream>
using namespace std;
class common
{
    public:
    int maxspeed = 120;
    int milage = 35;
    int enginegrade_cc = 100; 
    common():maxspeed(120),milage(35), enginegrade_cc(100){}
    void display()
    {
        cout<<"The maximum speed is "<<maxspeed;
        cout<<"The milage is "<<milage;
        cout<<"The enginegrade (in cc) is "<<enginegrade_cc;
    }
};
class splendor : public common
{
    
    cout<<"This is slendor";
};
class rtr100   : public common
{
    cout<<"This is rtr100";
};
class hyabusa  :  public common 
{
    cout<<" This is hyabusa";
};
int main()
{
    cout<<"This is the main function";
    splendor spl;
    spl.display();
    rtr100 rtr;
    rtr.display();
    hyabusa hya;
    hya.display();
    return 0;
}
