#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int Ans;
    Ans= no1+no2;
    return Ans;
}
int Maximum(int no1,int no2)
{
    if(no1>no2)
    {
        return no1;
    }
    else
    {
        return no2;
    }

}

int main()
{
    int a=11; int b=21; int Ans=0;

    Ans=Addition(a,b);
    cout<<"Addition is "<<Ans<<"\n";
    Ans=Maximum(a,b);
    cout<<"Largest no is "<<Ans<<"\n";

    return 0;
}

