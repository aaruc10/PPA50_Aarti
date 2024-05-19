#include<stdio.h> //for ip op printf scanf
#include<stlib.h> //for malloc,calloc,realloc & free

int main()
{
    int arr[5]; //static memory allocation 
    int size=0;
    int*ptr=NULL;

    printf("enter the  number of elements \n");
    scanf("%d",&size);

    ptr= (int *) calloc (size,sizeof(int));//for calloc instead of *(malloc) we use , 
    //ptr= (int *) calloc (12,500ml=6 ltr); 
    //ptr=(int*) malloc (6000ml=6 ltr)

    
    //use the memory 

    free(ptr);

    return 0;

}
