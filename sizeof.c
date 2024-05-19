#include<stdio.h>

int main()
{
    int i=11; //1 byte
    char ch='A'; //4byte
    float f=90.89; //8 byte
    double d=90.8976; //8 byte

    int Arr[5];  //20 bytes
    double Brr[5]; //40 bytes
    float Crr[5];  //20 bytes
    char Drr[5];  // 5 bytes

    printf("%d\n",sizeof(ch)); //instead of %d we can write lu ie long unsigned number
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));
    printf("%d\n",sizeof(Crr));
    printf("%d\n",sizeof(Drr));

    return 0;
}