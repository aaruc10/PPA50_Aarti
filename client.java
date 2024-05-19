import java.net.*;
import java.io.*;

class client
{
    public static void main(String a[]) throws Exception
    {
        System.out.println("client application is running ");

        ServerSocket ssobj=new ServerSocket ("localhost",2100);//2100 is port number//server live hoto listener mode mdhe jaato
        System.out.println("client gets sucesfully connceted  ");//
        
        PrintStream ps=new PrintStream(sobj.getOutputStream());
        BufferedReader br1=new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2=new BufferedReader(new InputStreamReader(System.in));
        String str1,str2;
        System.out.println("MArvellous messanger started ");

        while(!(str1=br2.readLine()).equals("end"));
        {
            ps.println("str1");
            str2=br1.readLine();
            System.err.println("Enter message for server ");
            System.err.println("Server says : "+str2);
        }
        System.err.println("Thank you for using marvellous messanger  ");
    }
}