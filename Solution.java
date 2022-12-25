import java.util.*;
class Solution
 {
    public static void twoSum(int[] nums, int target) {
        int i,j;
        int sum=0;
        for(i=0;i<=nums.length;i++){
            for(j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    System.out.print(i+""+j);
                    sum++;
                }
            }
            
        }
        if(sum==0){
            System.out.println("No target found");
        }
        
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int nums[]=new int[5];
            int target;
            for(int i=0;i<nums.length;i++){
                nums[i]=sc.nextInt();
                
            }
            target=sc.nextInt();
            twoSum(nums,target);
        
    }
}