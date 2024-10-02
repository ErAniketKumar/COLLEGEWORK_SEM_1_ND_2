#include<iostream>
using namespace std;
namespace A{
    void f()
    {
        cout<<"A\n";
    }
}
namespace B{ 
   void f()
    {
        cout<<"B\n";
    }
}
using namespace A;
int main()
{

   f();
   B::f();
    return 0;
}