#include<iostream>

using namespace std;

class base //parent
{
    public:
      int a,b;
      base()
      {
        cout<<"insdie base constructor\n";
        a=11;
        b=21;
      }
      ~base()
      {
        cout<<"inside base destructor\n";
      }
      void fun()
      {
        cout<<"inside base fun\n";
      }
};
class derived: public base //child 
{
    public:
      int x,y;

      derived()
      {
        cout<<"inside derived constructor \n";
        x=51;
        y=101;
      }
      ~derived()
      {
        cout<<"inside derived destructor \n";
      }
      void gun()
      {
        cout<<"inside derived gun \n";

      }
};

class derivedx: public derived //grandchild
{
    public:
      int p;
      derivedx()
      {
        cout<<"inside derivedx constructor\n";  
        p=111;
      }
      ~derivedx()
      {
        cout<<"inside derivedx destructor\n";
      }
      void sun()
      {
        cout<<"inside derivedx sun \n";
      }
};

int main()
{
    derivedx dobj; //constructor calling sequence = base,derived,derivedx
    cout<<sizeof(dobj)<<"\n";//20

    cout<<dobj.a<<"\n";//11
    cout<<dobj.b<<"\n";//21
    cout<<dobj.x<<"\n";//51
    cout<<dobj.y<<"\n";//101
    cout<<dobj.p<<"\n";//111

    dobj.fun();//base fun
    dobj.gun();//derived gun
    dobj.sun();//derivedx sun

    //destructor sequence = derivedx,derived,base 

    return 0;
}