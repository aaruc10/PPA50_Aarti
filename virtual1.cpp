#include<iostream>

using namespace std;

class base
{
    public:
      int a,b;
      void fun() //1000
      {
        cout<<"inside base fun\n";//definition
      }
       void gun()//2000
      {
        cout<<"inside base gun\n";//definition
      }
       void sun()//3000
      {
        cout<<"inside base  sun\n";//definition
      }
};
class derived: public base 
{
    public:
      int x,y;
      void gun() //4000
      {
        cout<<"inside derived gun\n";//redefinition
      }
       void sun()//5000
      {
        cout<<"inside derived sun\n";//redefinition
      }
       void run()//6000
      {
        cout<<"inside derived run\n";//definition
      }
};

int main()
{
    base bobj;
    derived dobj;

    bobj.fun(); //base fun
    bobj.gun();//base gun
    bobj.sun();//base sun

    dobj.fun();//base fun
    dobj.gun();//derived gun
    dobj.sun();//derived sun
    dobj.run();//derived run

    return 0;
}