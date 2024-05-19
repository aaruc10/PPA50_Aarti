class demo
{
    public int no1;
    public final int no2;//final characteristics 

    public demo()
    {
        no1=11;
        no2=21;//we can initialize it in constructor 
    }
}

class final1
{
    public static void main(String a[])
    {
        demo obj=new demo();

        obj.no1++;
        obj.no2++; //error because it is final characteristics 
    }

}