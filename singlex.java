class base
{
    public int a,b;
    public base()
    {
        System.out.println("Base constructor ");
    }
     public void fun()
    {
        System.out.println("inside base fun "); 
    }
}
class derived extends base //class derived: piblic base (c++ syntax )
{
    public int x,y;
    public derived()
    {
        System.out.println("derived constructor  "); 
    }
    public void gun()
    {
        System.out.println("inside derived gun "); 
    }
}

class singlex 
{
     public static void main (String arg[])
     {
        base bobj1 =new base();
        derived dobj = new derived();
        base bobj2= new derived();
        derived dobj2=new base();
        

        dobj.fun();
        dobj.gun();

     }
    
}