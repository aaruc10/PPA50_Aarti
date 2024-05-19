class base
{
    public int a,b;
    
     public void fun()
    {
        System.out.println("inside base fun "); 
    }
    public void gun()
    {
        System.out.println("inside base gun "); 
    }
    public void sun()
    {
        System.out.println("inside base sun "); 
    }
    public void run()
    {
        System.out.println("inside base run "); 
    }
}
class derived extends base //class derived: piblic base (c++ syntax )
{
    public int x,y;
   
    public void gun()
    {
        System.out.println("inside derived gun "); 
    }
}

class rmd 
{

}