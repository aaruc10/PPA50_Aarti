#include<stdio.h>

void display(int no)//callee
{
    static int iCnt=0;

    if(iCnt<no) //iteration
    {
        printf("Jay Ganesh\n");
        iCnt++;
        display(no); //recursive call // acts like a loop 
    }
}


int main()
{
    display(3); //caller

    return 0;

}