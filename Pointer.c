#include<stdio.h>

int main()
{
    int No = 11;
    int * ptr=&No;

    double data =90.9999;
    double * dptr =&data;

    printf("%d\n",No); //11
    printf("%f\n",data); //90.9999

    printf("%d\n",sizeof(No)); //4
    printf("%d\n",sizeof(ptr)); //8
    printf("%d\n",sizeof(data)); //8
    printf("%d\n",sizeof(dptr)); //8

    printf("%d\n",*ptr); //11
    printf("%f\n",*dptr); //90.9999

    return 0;


    
    
}