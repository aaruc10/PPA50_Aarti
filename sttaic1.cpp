#include<iostream>

using namespace std;

class demo()
{
    public:
       int no1,no2; //non static characteristics
       static int x; //sttaic characteristics 

       demo()
       {
        this->no1=10; //instance 
        this->no2=20;
       }

       void fun() //non static behaviour
       {
        cout<<"inside fun\n";
        cout<<no1<<"\n";
        cout<<x;
       }
       static  void gun() //static behaviour 
       {
        cout<<"inside gun\n";
        cout<<x<<"\n";
       }

       
};
int demo ::x=11; //class variable
int main()
{
    cout<<"value of x is:"<<demo::x<<"\n";

    demo::gun();

    demo obj1;
    demo obj2;

    cout<<"size of obj:"<<sizeof(obj1)<<"\n";
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";

    obj1.fun();
    obj2.fun();

    
    return 0;
}