//Linked List
import java.util.*;

class collections2
{
    public static void main(String a[])
    {
        Stack<Float>sobj=new Stack<Float>();

        sobj.push(10.5f);
        sobj.push(20.5f);
        sobj.push(30.5f);
        sobj.push(40.5f);

        float fret =sobj.pop();
        System.out.println(fret);

        fret=sobj.pop();
        sobj.push(10.5f);
        
    
    }


}