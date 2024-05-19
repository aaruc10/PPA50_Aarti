#include<stdio.h>

//self referential structure 

struct demo
{

    int data;
    struct demo*next;
};

int main()
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21;
    obj2.next=&obj3;

    obj3.data=51;
    obj3.next=NULL;

    printf("%d\n",obj1.data); //11
    printf("%d\n",obj1.next->data); //21
    printf("%d\n",obj1.next->next->data); //51

    
   
    return 0;
}