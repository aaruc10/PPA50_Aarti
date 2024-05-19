#include<iostream>

using namespace std;

class demo()
{
    public:
       int no1,no2; //non static characteristics
       static int x; //static characteristics 

       demo()
       {
        no1=10; //instance variable 
        no2=20;
       }

       void fun() //non static method 
       {
        cout<<"inside fun\n";
        cout<<no1<<"\n";
        cout<<x<<"\n";
       }
       static void gun() //static method
       {
        cout<<"inside gun\n";
        cout<<x<<"\n";
       }

       
};
int demo()::x=11; //class variable
int main()
{
    cout<<"value of x is:"<<demo::x<<"\n"; //11

    demo::gun(); //static can access before creating object 

    demo obj1;
    demo obj2;

    cout<<"size of obj:"<<sizeof(obj1)<<"\n";//8 byte
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";//10,20
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";//10,20

    obj1.fun();//inside fun 10 20
    obj2.fun();

    obj1.gun();
    cout<<"value of x using object is :"<<obj1,x<<"\n";

    
    return 0;
}