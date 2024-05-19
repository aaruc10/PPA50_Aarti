import java.io.*;

class binput
{
    public static void main (String a[])
    {
        //InputStreamReader iobj=new InputStreamReader(System.in);
        //BufferedReader bobj=new BufferedReader(iobj);

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in) );

        System.out.println("Enter Your Name");
        String name=bobj.readLine();

        System.out.println("Welcome:"+name);


        
    }
}