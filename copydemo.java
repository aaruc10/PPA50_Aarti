class student implements Cloneable
{
    public String name;
    public int marks;
    public int age;
    
    public student (String str,int a,int b)
    {
        this.name=str;
        this.marks=a;
        this.age=b;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class copydemo
{
    public static void main (String a[])
    {

        try
        {
        
        student sobj=new student("Aarti",70,21);
        System.out.println("name of student :"+sobj.name);
        System.out.println("marks of student :"+sobj.marks);
        System.out.println("age of student :"+sobj.age);

        student sobjx=(student)sobj.clone();
        System.out.println("name of student :"+sobjx.name);
        System.out.println("marks of student :"+sobjx.marks);
        System.out.println("age of student :"+sobjx.age);

      }

        catch(Exception obj )
        {
            
        }


    }
}