#include<iostream>

using namespace std;

const int a=10; //constant global variable
int b=20;

class demo()
{
    public:
     int x,y;
     demo()
     {
        x=10;
        y=20;   
     }
     void fun(int i,const int j) //constant input arguement 
     {
        int no1=11;
        const int no2=21; //constant local variable 
        i++; //a
        j++; //na
        no1++; //a
        no2++; //na


     }
};

int main()
{
    demo obj1;
    const demo obj2; //constant object 

    obj1.(51,101);

    obj1.x++; //a
    obj1.y++; //a

    obj2.x++;//na
    obj2.y++;//na

    a++;//a
    b++;//na

    return 0;
}