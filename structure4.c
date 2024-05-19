#include<stdio.h>

#pragma pack(1)

struct student 
{
    int rollno; //4 byte
    char division; //1
    int age; //4
    float marks; //4
    int salary; //4

};

int main()
{ 
    struct student amit;
    struct student pooja;

    printf("size of object is :%d\n",sizeof(amit));


    return 0;
}