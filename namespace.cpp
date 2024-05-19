#include<iostream>
 //inbuilt namespace

namespace Marvellous
{
    class demo
    {

    };
}
namespace PPA
{
    class hello
    {

    };
}
using namespace Marvellous;
int main()
{
    std::cout<<"Inside Main...\n";//instead os using using namespace std;
    demo dobj;
    PPA::hello hobj;

    return 0;
}