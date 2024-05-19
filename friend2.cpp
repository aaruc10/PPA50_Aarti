#include<iostream>

using namespace std;

class Hello
{
    public:
        void Fun();
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

     friend void Hello::Fun();//fun is a member of hello class func who is friend 
};
void Hello::Fun()//fun define 
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

    return 0;
}