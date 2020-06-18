#include <iostream>
using namespace std;
class parent 
{
    private:
    
    int serial = 10;
    float percent =20.67;
    
    public:
    int function(float a)
    {
        a = serial + percent;
        cout<<"i am an integer datatype function";
        return a;
    }
    void alpha()
    {
        cout<<"This is a void function";
    }
};
int main()
{
    float x;
    parent obj;
    obj.function();
    x = obj.function();
    cout<<"The value of the integer public function is"<<x;
    obj.alpha();
    return 0;
}
