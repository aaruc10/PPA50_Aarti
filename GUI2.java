//modified GUI1
import java.awt.*;

class marvellousFrame
{
    public marvellousFrame(String title)
    {
        Frame fobj=new Frame("PPA50");//will se frame and and frame title is PPA50
        fobj.setSize(600,600);//600*600(length*width) size aahe frame chi 
        fobj.setVisible(true);//dolyala disali pahije mhnje visible 
        //karan frame RAM vrti tayar zaleli aahe //screen vrti visible hoyla setVisible


    }
}

class GUI2
{
    public static void main(String a[])
    {
       
        marvellousFrame mobj=new marvellousFrame("PPA50");


    }
}