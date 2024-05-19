import java.util.*;

class exception3
{
    public static void main(String a[])
    {
        try
        { 
            Scanner sobj=new Scanner(System.in);

            int arr[]={10,20,30,40,50};
    
            System.out.println("Enter the index no:");
            int i=sobj.nextInt();
    
            System.out.println(arr[i]);


        }

        catch(ArrayIndexOutOfBoundsException obj )
        {
            System.out.println("inside catch block ");
        }
        finally
        {
            System.out.println("inside finally block "); 
        }
        System.out.println("end of code  "); 
       
    }    

}
//in progra, is exception if we have give input to index is above 4