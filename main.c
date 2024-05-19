#include<stdio.h>

int x=21;

extern int no;

extern void marvellous();

int main()
{

    printf("%d\n",x);
    printf(" %d\n",no);

    marvellous();


    return 0;
}