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

class single 
{
     public static void main (String arg[])
     {
        derived dobj = new derived();
        dobj.fun();
        dobj.gun();

     }
    
}