#include<iostream>

using namespace std;

class base
{
    public:
      int a;
    private:
      int b;
    protected:
      int c;
    public:
      base()
      {
        a=10;
        b=20;
        c=30;
      }
      void fun()
      {
        cout<<a<<"\n"; //allowed
        cout<<b<<"\n"; //a
        cout<<c<<"\n"; //a
      }
};
class derived: public base 
{
    public:
      void gun()
      {
        cout<<a<<"\n";//a
        cout<<b<<"\n";//na(not allowed)
        cout<<c<<"\n";//a
      }
}

int main()
{
    base bobj;
    cout<<bobj.a<<"\n";//a
    cout<<bobj.b<<"\n";//na
    cout<<bobj.c<<"\n";//na


    return 0;
}