import marvellous.arithmatic;
import infosystems.mathematics;


class PPA
{
    public static void main (String a[])
    {
        arithmatic aobj=new arithmatic();
        mathematics mobj = new mathematics();

        System.out.println(aobj.addition(11,10));
        System.out.println(aobj.subtraction(11,10));

        System.out.println(mobj.multiplication(11,10));
        System.out.println(mobj.division(110,10));

    }
}