class base
{
    public int a,b;
    public base ()
    {
        System.out.println("inside base constructor ");
        this.a=10;
        this.b=20;
    }
    public void fun()
    {
        System.out.println("inside base fun ");
    }

}
class derived extends base  
{
    public int x,y;
    public derived(int i,int j)
    {
        super();//aadhi apret class kde ja//base class la call krtoy 
        System.out.println("inside derived constructor ");
        this.x=i;
        this.y=j;
    }
    public void gun()
    {
        System.out.println("inside derived gun ");
        super.fun();//parent class chya base ch fun la call kra 
        System.out.println("value of a :"+super.a);
        System.out.println("value of x :"+this.x);

    }
}
class keyword
{
    public static void main (String a[])
    {
        derived dobj=new derived(11,21);
        dobj.gun();

    }
}