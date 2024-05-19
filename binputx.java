import java.io.*;

class binputx
{
    public static void main (String a[])
    {
        //InputStreamReader iobj=new InputStreamReader(System.in);
        //BufferedReader bobj=new BufferedReader(iobj);
        try{

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in) );

        System.out.println("Enter Your Name");
        String name=bobj.readLine();

        System.out.println("Welcome:"+name);
        }
        catch(IOException obj)
        {

        }


        
    }
}