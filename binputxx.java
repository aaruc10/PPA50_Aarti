import java.io.*;

class binputxx
{
    public static void main (String a[])
    {
        //InputStreamReader iobj=new InputStreamReader(System.in);
        //BufferedReader bobj=new BufferedReader(iobj);
        try{

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in) );

        System.out.println("Enter First No ");
        int no1=Integer.parseInt(bobj.readLine());

        System.out.println("Enter Second No ");
        int no2=Integer.parseInt(bobj.readLine());


        int ans=no1+no2;
        System.out.println(ans);
        }


        catch(IOException obj)
        {

        }


        
    }
}