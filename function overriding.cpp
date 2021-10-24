//function overriding
#include<iostream>
using namespace std;
class A{
    public:
    void run()
    {
        cout << "Base class is running";
    }
};
class B : public A{
    public:
    void run()
    {
        cout << "Derived class is running";
    }
};
int main()
{
B obj;
obj.run();
    return 0;
}
