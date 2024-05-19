#include<iostream>

using namespace std;

class demo
{
    public:
      int a;
      demo()
      {
        a=10;
        cout<<"inside demo constructor \n";
      }
      ~demo()
      {
        cout<<"inside demo destrctor\n";
      }
      void fun()
      {
        cout<<"inside demo fun\n";
      }
};
class hello
{
    public:
      int b;
      hello()
      {
        b=20;
        cout<<"inside hello constructor \n";
      }
       ~hello()
      {
        cout<<"inside hello destrctor\n";
      }
      void gun()
      {
        cout<<"inside hello gun \n";
      }
};
class marvellous:public hello, public demo
{
    public:
      int c;
    marvellous()
    {
        c=30;
        cout<<"inside marvellous constructor\n";
    }
    ~marvellous()
    {
        c=30;
        cout<<"inside marvellous destructor\n";
    }
    void sun()
    {
        cout<<"Inside marvellous sun \n";
    }
};

int main()
{
    marvellous mobj;

    mobj.fun();
    mobj.gun();
    mobj.sun();

    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";

    return 0;
}