
import java.util.*;

public class string2
{
    public void main()
    {
         System.out.println("enter the string");
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        String rev="";
        for(int i=s1.length()-1;i>=0;i--)
        {
            rev=rev+s1.charAt(i);
        }
        if(s1.equals(rev))
        {
            System.out.print("Palindrome");
        }
        else
        {
           System.out.print("Not a Palindrome"); 
        }
    }
}