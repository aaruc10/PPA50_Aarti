import java.awt.*;
import java.awt.event.*;

class marvellousFrame
{
    public marvellousFrame(String title)
    {
        Frame fobj=new Frame("PPA50");//will se frame and and frame title is PPA50
        fobj.setSize(600,600);//600*600(length*width) size aahe frame chi 
        fobj.setVisible(true);//dolyala disali pahije mhnje visible 
        //karan frame RAM vrti tayar zaleli aahe //screen vrti visible hoyla setVisible
        fobj.addWindowListener(new marvellousListener());


    }
}
class marvellousListener extends WindowAdapter
{
    
    public void windowClosing(WindowEvent obj )
    {
        System.exit(0);
    }
    

}

class GUI4
{
    public static void main(String a[])
    {
       
        marvellousFrame mobj=new marvellousFrame("PPA50");


    }
}