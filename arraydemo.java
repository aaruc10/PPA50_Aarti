class arraydemo
{
    public static void main (String arg[])
    {
        int arr[]=new int[5];//new mhnlyavrtich memory allocate hote java mdhe dynamically memory allocate hote
        
        arr[0]=10;
        arr[1]=20;
        arr[2]=30;
        arr[3]=40;
        arr[4]=50;

        System.out.println("numer of elements in array:"+arr.length);//arr.length gives us how many no in array + for concatenation
        // no of elements are:5 ya donhi

        System.out.println(arr[0]);
        System.out.println(arr[1]);
        System.out.println(arr[2]);
        System.out.println(arr[3]);
        System.out.println(arr[4]);

    }
}