import java.util.*;

public class string5
{
    public void main()
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String result="";
        for(int i=0;i<s.length();i++)
        {
              if(Character.isLowerCase(s.charAt(i))) {  
                result=(String)(result+Character.toUpperCase(s.charAt(i)));  
            }   
            else if(Character.isUpperCase(s.charAt(i))) {    
                result=(String)(result+Character.toLowerCase(s.charAt(i)));
            }  
        }  
        System.out.println("String after case conversion : " + result);  
    }  
}  