public class string
{
    public void main()
    {
        int i,n;
        String s1=new String("aditya");
        String rev="";
        for(i=s1.length()-1;i>=0;i--)
        {
            rev=rev+s1.charAt(i);
        }System.out.print(rev);
    }
}