class base
{
    public void fun()
    {
        System.out.println("inside base fun");
    }
    public final void gun()
    {
        System.out.println("inside base gun");
    }

}
class derived extends base 
{
    public void fun() //method override 
    {
        System.out.println("inside derived fun");
    }
    public void gun ()//gun cant override because it is final method 
    {
        System.out.println("inside derived  gun");
    }


}

class final2
{
    public static void main(String a[]);
   
}