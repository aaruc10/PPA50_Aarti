#include<stdio.h>

struct Demo
{

    int no;
    int data;
};

int main
{
    struct demo obj;

    struct demo *ptr=&obj;

    obj.no=11 //direct accesing point

    ptr->21; //indirect accesing point 

    return 0;
}