#include<iostream>

using namespace std;

class demo
{
    public:
       int a,b;
       demo(int i, int j);
       {
        a=i;
        b=j;
       }
};

int main()
{

    demo obj1(10,11);
    demo obj2(20,21);
    demo ans(0,0);

    ans=obj1+obj2;
    cout<<ans.a<<"\n"<<ans.b<<"\n";

    return 0;
}