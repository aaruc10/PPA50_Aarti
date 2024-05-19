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
//marvellous cha object 2 hote mhnun synchronizex navta hot 
//object ekch banavala 
//hobj ani dobj tayar kela
//doghana marvellous cha obj pathvla (parametrized)
// doghnchya run method ne ek marvellous obj ahe two thread access krtyt 
//syncroynized method rk method la ekda access karyla sangt aahe 
//


class demo extends Thread 
{
    public marvellous obj;

        public demo(marvellous ref )
        {
            this.obj=ref;

        }
    public void run()
    {
        
        obj.Display(5);
    }
}

class hello extends Thread 
{
    public marvellous obj;

        public hello(marvellous ref )
        {
            this.obj=ref;

        }
    public void run()
    {
        
        obj.Display(2);
    }
}
class multi10
{
    public static void main (String a[])
    {
        marvellous obj=new marvellous();

        demo dobj=new demo(obj);
        hello hobj=new hello(obj);

        dobj.start();
        hobj.start();
    }
}