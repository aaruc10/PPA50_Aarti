// with static 
#include<stdio.h>

void marvellous()
{
    static int x=10;
    x++; //11

    printf("value of x is %d\n",x);
}

int main()
{
    printf("demonstration of static storage class..\n");
    marvellous(); //11
    marvellous(); //12 
    marvellous(); //13
    return 0;
}