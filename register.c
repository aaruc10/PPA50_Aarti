#include<stdio.h>

void marvellous()
{
    int i=11;
    register int j=21;
    register int k;

    printf("%d\n",k);
}

int main()
{
    printf("demonstration of  register class..\n");
    marvellous();
    return 0;
}