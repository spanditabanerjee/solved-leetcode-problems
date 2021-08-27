class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0;
        int maxim=nums[0];
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(sum>maxim) maxim=sum;
            if(sum<0) sum=0;
        }
        
        return maxim;
        
    }
}