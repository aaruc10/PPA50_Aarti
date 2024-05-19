class oop
{
    public static void main (String arr[])
    {
        arithmetic obj1=new arithmetic();
        arithmetic obj2=new arithmetic(21,11);

        int ret=0;

        ret=obj2.addition();
        System.out.println(ret);

        ret=obj2.subtraction();
        System.out.println(ret);
    }
}
class arithmetic
{
    public int no1;
    public int no2;

    public arithmetic()
    {
        System.out.println("inside default constructor");

        this.no1=0;
        this.no2=0;
    }
    public arithmetic(int a, int b)
    {
        System.out.println("inside parametrised constructor");
        this.no1=a;
        this.no2=b;
    }
    public int addition()
    {
        int ans=0;
        ans= no1+no2;
        return ans;

    }
    public int subtraction()
    {
        int ans=0;
        ans = no1-no2;
        return ans;
    }
}