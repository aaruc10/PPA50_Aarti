//Linked List
import java.util.*;

class collections1
{
    public static void main(String a[])
    {
        LinkedList<Integer>lobj=new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        
        System.out.println(lobj);
        lobj.addFirst(5);
        System.out.println(lobj);

        Iterator lobj=lobj.iteratr();
        while(lobj.hasNext())
        {
            System.out.println(lobj.next());

        }
        lobj.clear();

    }


}