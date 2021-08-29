class Solution {
    public int maxSubArraysum(int[] nums) {
        int sum=0;
        int maximum=nums[0];
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(sum>maximum) maximum=sum;
            if(sum<0) sum=0;
        }
        
        return maximum;
        
    }
}
