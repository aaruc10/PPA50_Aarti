#include<iostream>

using namespace std;

class demo
{
    public:
       int a,b;
       demo(int i, int j)
       {
        a=i;
        b=j;
       }
       //demo operator+(demo const*this , demo op2)
       demo operator + (demo op2)
       {
        cout<<"inside operator overloading \n";
        return demo(this->a+op2.a, this->b+op2.b);

       }   
};




int main()
{

    demo obj1(10,11);
    demo obj2(20,21);
    demo ans(0,0);

   ans= obj1+obj2;//obj1.+(obj2) +(&obj1,obj2)

   //+(obj1,obj2)

   cout<<ans.a<<"\n"<<ans.b<<"\n";

   

    return 0;
}