#include<iostream>

using namespace std;

class marvellous
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

class demo : public marvellous
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
class hello : public marvellous
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

int main()
{
    demo dobj();
    hello hobj();

    

    return 0;
}