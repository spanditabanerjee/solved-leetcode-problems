class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int p = 0, bucket1 = 0, bucket2 = 0;
       
        for (int i = 0; i < nums.size(); ++i)
            p ^= (i + 1) ^ nums[i];

        p &= -p; 

        for (int i = 0; i < nums.size(); ++i)
        {
            ((nums[i] & p) == 0) ? bucket1 ^= nums[i] : bucket2 ^= nums[i];
            (((i + 1) & p) == 0) ? bucket1 ^= i + 1 : bucket2 ^= i + 1;
        }

     
        for (auto n : nums)
            if (n == bucket1)
                return {bucket1, bucket2};
        return {bucket2, bucket1};
    }
};
    
    //done in xor method
    //time complexity: O(n)
    //space complexity: O(1)