#include<stdio.h>

int multiplication(int no1,int no2)
{
    int ans=0;
    ans= no1 * no2;
    return ans;

}

int main() //entry point function
{
    //local variable - means i can use these varibles only in this code
    int value1=0,value2=0,ret=0;//initialize variable

    printf("enter first number:\n");
    scanf("%d",&value1); //if we want to input from user we use scanf we use & for going to that location 

    printf("enter second number:\n");
    scanf("%d",&value2);

    ret=multiplication(ans);

    printf("multiplication is:%d\n",ret);

    return 0;






}