#include<iostream>

using namespace std;

class demo
{
    public:
       int i;

    protected:
       int j;

    private:
       int k;

    public:
       demo()
       {
        i=10;
        j=20;
        k=30;
       }


};


int main()
{
    demo obj;
    cout<<obj.i;
    cout<<obj.j;//cant print becuase its protected 
    cout<<obj.k; //cant print because its private 

    return 0;
}
//program will generate error ...