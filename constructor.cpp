#include<iostream>

using namespace std;

class arithmetic
{
    public:
       int no1;
       int no2;

       arithmetic()
       {
        cout<<"inside default constructor \n";
        no1=0;
        no2=0;
       }
       arithmetic(int a, int b)
       {
        cout<<"inside parametrised constructor \n";
        no1=a;
        no2=b;
       }
       arithmetic(arithmetic &ref)
       {
        cout<<"inside copy constructor\n";
        no1=ref.no1;
        no2=ref.no2;
       }
       ~arithmetic()
       {
        cout<<"inside destructor\n"; //3 vela call hoin karan 3 object aahet 
       }


};

int main()
{
    arithmetic obj1; //default constructor 
    arithmetic obj2(11,21); //parametrised constructor 
    arithmetic obj3(obj2);//copy constructor 
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
    cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";



    return 0;
}