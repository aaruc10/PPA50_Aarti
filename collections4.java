//Linked List
import java.util.*;

class collections4
{
    public static void main(String a[])
    {
        Hashtable<String,Integer>hobj=new Hashtable<String,Integer>();

        hobj.add("PPA",19500);
        hobj.add("LB",20000);
        hobj.add("PYTHON",20500);
        hobj.add("ANGULAR",21500);

        System.out.println(hobj.get("PYTHON"));

    }
}