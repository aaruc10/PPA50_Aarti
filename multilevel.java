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
class derivedx extends derived 
{
    public int p,q;
    {
        System.out.println("derivedx constructor  "); 
    }
    public void sun()
    {
        System.out.println("inside derivedx sun "); 
    }
}

class multilevel 
{
     derivedx dobj=new derivedx();
     dobj.fun();
     dobj.sun();
     dobj.gun();
     

    
}