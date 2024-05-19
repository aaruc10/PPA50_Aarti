
import java.net.*;
import java.io.*;

class server
{
    public static void main(String a[]) throws Exception
    {
        System.out.println("server application is running ");

        ServerSocket ssobj=new ServerSocket ("localhost",21002100);//2100 is port number
        System.out.println("Server is waiting for client ");



        Socket sobj=new Socket("localhost",2100);
        System.out.println("Client gets sucessfully installed"  );

        sobj

        

        PrintStream ps=new PrintStream(sobj.getOutputStream());
        BufferedReader br1=new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2=new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;
        while((str1=br1.readLine())!=null)
        {
            System.out.println("Server says : "+str1);
            str2=br2.readLine();
            System.out.println("Enter the msg for server ");
            System.out.println("Server says : "+str2);

        }
        System.err.println("Thank you for using marvellous messanger  ");

    }
}