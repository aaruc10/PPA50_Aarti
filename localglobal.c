#include<stdio.h>

int x=101; //naked variable (global variable),//load time variable 

void marvellous()
{
    int i=21; //local variable 
    int no=51; //local variable

    printf("from marvellous value of no is :%d\n",no); //51
    printf("from marvellous value of x is :%d\n",x); //101
    printf("from marvellous value of i is :%d\n",i); //21



}

int main()
{
    int no=11; //local variable

    printf("from main value of no is :%d\n",no); //11
    printf("from main value of x is :%d\n",x); //101

    marvellous();

    return 0;
}