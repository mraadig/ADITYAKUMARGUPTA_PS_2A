import java.util.*;

public class string4
{
    public void main()
    {
        int count=0;
        System.out.print("enter the paragraph.");
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
         char ch[]= new char[s1.length()];
         for(int i=0;i<s1.length();i++)
         {
             ch[i]=s1.charAt(i);
             if( ((i>0)&&(ch[i]!=' ')&&(ch[i-1]==' ')) || ((ch[0]!=' ')&&(i==0)) )  
                    count++;  
             
         }
         System.out.print(count+"words");
         
        
        
        
        
    }
}