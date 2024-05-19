#include<stdio.h> //for ip op printf scanf
#include<stlib.h> //for malloc,calloc,realloc & free

int main()
{
    
    int*ptr=NULL;

   

    ptr=(int*)realloc(NULL,10 *sizeof(int)); //null mhnje preallocated memory nhye then it behaves like malloc

    ptr=(int*)realloc(ptr,0);  //free the memory 

    

    return 0;

}
