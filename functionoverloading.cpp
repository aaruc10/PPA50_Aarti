#include<iostream>

using namespace std;

class arithmetic
{
    public:
    
      int addition(int no1, int no2) //addition@2ii
      {
        return no1+no2;

      }
      int addition(int no1, int no2,int no3) //addiiton@3iii  //function name is same but prototype (in bracket value) are different called polymorphism 
       {
        return no1+no2+no3;

      }
      double addition(double no1,double no2)//addition@2dd
      {
        return no1+no2;
      }
      double addition(double no1,double no2,double no3)//addition@3ddd
      {
        return no1+no2+no3;
      }

};
int main()
{
    arithmetic obj;
    
    cout<<obj.addition(11,21)<<"\n";
    cout<<obj.addition(11,21,31)<<"\n";
    cout<<obj.addition(11.1111,21.2121)<<"\n";
    cout<<obj.addition(11.1111,21.1111,31.31111)<<"\n";
    
    return 0;
}