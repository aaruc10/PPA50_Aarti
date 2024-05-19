#include<iostream>

using namespace std;
//class declaration
class demo
{
    public: //access specifier 
        int no1;//characteristics 
        int no2;//characteristics

        demo() //constructor 
        {
            cout<<"inside constructor..\n";
            no1=11;
            no2=22;
        }
        ~demo() //destructor
        {
            cout<<"inside destructor..\n";
            
        }
        void fun() //behaviour
        {
            cout<<"inside fun of demo class..\n";
        }

};
int main()
{
    cout<<"inside main function\n"; 
    demo obj1;
    cout<<"size of object is :"<<sizeof(obj1)<<"\n";
    cout<<"value of no1:"<<obj1.no1<<"\n";
    cout<<"value of no2:"<<obj1.no2<<"\n";
    obj1.fun();


    return 0;
}