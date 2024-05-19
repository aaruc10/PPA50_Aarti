//abstract class and method 
abstract class demo//abstract class contains zero or more abstact methods 
//we cant create object of abstract class 
{
    public int addition(int a,int b)
    { return a+b;
    }
    public int subtraction (int a, int b)
    { return a-b;
    }
    public abstract  int multiplication (int a, int b);//func wihtout body 

}
class marvellous extends demo 
{ 
    public int division ( int a,int b)
    { return a/b;
    }
    public int multiplication ( int a,int b)//inherited abstract class that has to be define in marvellous class 
    { return a*b;
    }

}

class hello
{
    public static void main (String a[])
    {
        //demo obj1=new demo(); //error because base is abstract 
        marvellous mobj=new marvellous();
        System.out.println(mobj.addition(10,100));
        System.out.println(mobj.subtraction(10,100));
        System.out.println(mobj.division(10,100));
        System.out.println(mobj.multiplication(10,100));

    }

}