#include<iostream>
using namespace std;

class Hello
{
    public:
        void Fun();
        void Gun();
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        Demo()
        {
            i = 10;
            j = 20;
           k = 30;
        }
        friend class Hello;// class hello func is friend of class demo then void fun and gun can access members of class demo 
};

void Hello::Fun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";        
}

void Hello::Gun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";        
}

int main()
{
    Hello hobj;

    hobj.Fun();
    hobj.Gun();

    return 0;
}