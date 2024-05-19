#include<stdio.h>

struct hello
{

    int no;
    float f;
};

struct Demo
{
    int data;
    struct hello hobj;

};

int main()
{
   struct Demo dobj;
   dobj.data=11;
   dobj.hobj.no=21;
   dobj.hobj.f=90.00;

    return 0;
}
//it will generate error becase we cant create object inside structure 