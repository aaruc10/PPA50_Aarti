interface circle 
{
    float radius = 10.5f;
    float pi=3.14f;

    float area();
    float circumference();
}

class marvellous implements circle 
{
    public float area()
    {
        return pi*radius*radius;
    }
    public float circumference()
    {
        return 2*pi*radius;
    }
}


class blueprint 
{
    public static void main (String a[])
    {

         marvellous mobj=new marvellous();

         System.out.println("Area is :"+mobj.area() );
         System.out.println("circumference  is :"+mobj.circumference()  );

         System.out.println("radius  is :"+circle.radius);
         System.out.println("pi is :"+circle.pi );

         //circle=7.12 //error we cant change value 

         
    }
    
}