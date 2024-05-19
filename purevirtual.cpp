#include<iostream>

using namespace std;

class base 
{
    public:
      int a,b;
      base()
      {
        cout<<"based constructor\n";
      }
      int addition( int i,int j)//1000
      {
        return i+j;
      }
      virtual int subtraction(int i, int j)//2000
      {
        return i-j;  
      }
      virtual int multiplication(int i,int j)=0; //abstract function

};
class derived :public base
{
    public:
      int x,y;
      derived()
      {
        cout<<"derived constructor\n";
      }
      int subtraction (int i,int j)//3000
      {
        return i-j;
      }
      int multiplication(int i,int j)//4000 concrete function of base class return abstract function
      {
        return i*j;
      }
      //virtual int division(int j,int j)//5000
      //{
       // return i/j;
      //}

};

int main()
{
    //base bobj; //it will generate error
    derived dobj;
    base*bp=&dobj;
 
    cout<<bp->addition(10,11)<<"\n"; //call base addition (karan additon base mdhe aahe )
    cout<<bp->subtraction(10,11)<<"\n"; // call derived subtraction (karan derived mdhe virtual nhye )
    cout<<bp->multiplication(10,11)<<"\n"; // call derived multiplication (derived mdhe concrete func aahe )
    //cout<<bp->division(100,10)<<"\n"; // base class mdhe division nhiye tyamule error yein

    return 0;
}
