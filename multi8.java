class marvellous 
{
    synchronized public void Display(int no)
    {
        try
        {

        
            int i=0;for(i=1;i<=10;i++)
          {
            System.out.println(i*no);
            Thread.sleep(1000);
          }
        }
        catch (Exception obj)
        {

        }
    }
}
//ekaveli 2 table 2 and 5 cha eksath run hot hota 


class demo extends Thread 
{
    public void run()
    {
        marvellous mobj=new marvellous();
        mobj.Display(5);

    }
}

class hello extends Thread 
{
    public void run()
        {
            marvellous mobj=new marvellous();
            mobj.Display(2);

        }
}
class multi8
{
    public static void main (String a[])
    {
        demo dobj=new demo();
        hello hobj=new hello();

        dobj.start();
        hobj.start();
    }
}