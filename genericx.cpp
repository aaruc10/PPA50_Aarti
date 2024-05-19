#include<iostream>
using namespace std;

template<class T> //template header

T Addition(T no1,T no2)
{
    T Ans;
    Ans= no1+no2;
    return Ans;
}

template<class T>
T Maximum(T no1,T no2)
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

    float x=90.79; float y=80.99; float Ret=0.0f;
    Ret=Addition(x,y);
    cout<<"Addition is "<<Ret<<"\n";
    Ret=Maximum(x,y);
    cout<<"Largest no is "<<Ret<<"\n";

    return 0;
}

