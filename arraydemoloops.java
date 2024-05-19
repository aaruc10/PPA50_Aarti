class arraydemoloops
{
    public static void main (String arg[])
    {
        
        int arr[]={10,20,30,40,50};

        int i=0;
        //1  2  3

        for(i=0; i<arr.length; i++)
        {
            System.out.println(arr[i]);//4
        }

        i=0;
        while(i<arr.length)
        {
            System.out.println(arr[i]);
            i++;
        }
        
    }
}    