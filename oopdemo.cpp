#include<iostream>

using namespace std;

class arithmetic
{
    public:
       int no1;
       int no2;

        arithmetic(int a, int b)
       {
        no1=a;
        no2=b;
       }
       int addition()
       {
        int ans=0;
        ans=no1+no2;
        return ans;
       }
       int substraction()
       {
        int ans=0;
        ans=no1-no2;
        return ans;
       }

};

int main()
{
    int value1=0, value2=0,ret=0;

    cout<<"enter first number:\n"; //like printf
    cin>>value1; //like scanf
    cout<<"enter second number:\n";
    cin>>value2;

    arithmetic obj(value1,value2);
    

    ret=obj.addition();
    cout<<"addition is :"<<ret<<"\n";

    ret=obj.substraction();
    cout<<"subtraction is :"<<ret<<"\n";

    return 0;

}