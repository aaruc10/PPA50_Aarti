#include<stdio.h> //for ip op printf scanf
#include<stlib.h> //for malloc,calloc,realloc & free

int main()
{
    
    int*ptr=NULL;

    ptr= (int *) malloc (5*sizeof(int)); //20 byte
    //use the memory 

    ptr=(int*)realloc(ptr,10 *sizeof(int)); //incrrasing memory 40 byte but no is lower than 5 then it is decraesing state

    free(ptr);

    return 0;

}
