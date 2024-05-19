class command
{
    public static void main(String arg [])
    {
        System.out.println("Number of command line arguements are"+arg.length);
        int i =0;
        for(i=0;i<arg.length;i++)
        {
            System.out.println(arg[i]);
        }

    }
}