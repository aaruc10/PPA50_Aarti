class wrapper 
{
    public static void main (String a[])
    {
        Integer iobj=new Integer(11);
        int no=11;

        Integer i=no;

        int j=iobj.intValue();//autoboxing

        System.out.println(j); //unboxing
        
    }
}