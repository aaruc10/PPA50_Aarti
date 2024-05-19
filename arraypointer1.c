#include<stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    printf("base address of arr is :%d\n",arr); //100
    printf("base address of arr is :%d\n",&arr); //100
    printf("base address of arr is :%d\n",&arr[0]); //100

    printf("first element of arr is :%d\n",arr[0]);//10
    printf("second element of arr is :%d\n",arr[1]);//20
    printf("third element of arr is :%d\n",arr[2]);//30

    printf("%d\n",arr[2]); //30
    printf("%d\n",*(arr+2));//30
    printf("%d\n",*(2+arr));//30
    printf("%d\n",2[arr]);//30

    return 0;
}