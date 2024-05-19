
    /*
     getClass()
     hachCode()
     equals()
     clone()
     finalize()
     */


     class marvellous 
     {
        public int i,j;

        public marvellous()
        {
            System.out.println("marvellous constructor ");
        }
        protected void finalize()
        {
            System.out.println("inside finalize method  ");
        }

     
     }
     //class objectdemo extends Object class
     class objectdemo1
     {
         public static void main(String a[])
         {
             Object obj=new marvellous();
             System.out.println(obj.hashCode());//we will get the hashcode or address of marvellous object 
             obj=null;
             System.gc();//call garbage collector 
            
     
         }
     }