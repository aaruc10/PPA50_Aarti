#include<stdio.h>

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

    amit.rollno=11;
    amit.division='a';
    amit.marks=90.89;
    amit.age=19;
    amit.salary=21000;

    pooja.rollno=21;
    pooja.division='d';
    pooja.marks=93.67;
    pooja.age=17;
    pooja.salary=5000;

    printf("age of amit is:%d\n",amit.age);
    printf("age of pooja is:%d\n",pooja.age);

    printf("salary of amit is :%d\n",amit.salary);
    printf("salary of pooja is :%d\n",pooja.salary);



    return 0;
}