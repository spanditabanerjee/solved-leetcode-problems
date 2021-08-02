class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size() ,k,p;
        for(k=n-2;k>=0;k--){
            if(nums[k] < nums[k+1])
                break;
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(p=n-1;p>k;p--){
                if(nums[p] > nums[k])
                    break;
            }
            swap(nums[k] , nums[p]);
            reverse(nums.begin()+k+1,nums.end());
        }
        
    }
};