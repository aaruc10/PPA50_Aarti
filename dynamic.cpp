#include<iostream>

using namespace std;



int main()
{ 
    int *ptr=NULL;
    int size=0;

    cout<<"enter the size of elements"<<"\n";
    cin>>size;

    ptr= new int[size];//navin integer cha array dya with user defined size 
    //ptr=(int *)malloc(size*sizeof(int)) // c syntax

    //use memory
    delete []ptr;//want to delete all memory of ptr array

    return 0;
}