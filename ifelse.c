#include<stdio.h>

int main()
{
    int Standard=0;
    printf("enter your standard:\n");
    scanf("%d",&Standard);

    if(Standard==1)
    {
        printf("your exam is at 7am\n");
    }
    else if (Standard==2)
    {
        printf("your exam is at 8am\n");
    }
    else if (Standard==3)
    {
         printf("your exam is at 9am\n");
    }
    else if (Standard==4)
    {
         printf("your exam is at 10am\n");
    }
    else
    {
        printf("wrong standard select\n");
    }
    return 0;


}