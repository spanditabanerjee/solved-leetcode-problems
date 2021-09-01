//Moore's voting algorithm 
//optimised solution


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = 0;
        for(int num : nums){
            
            if(count == 0)
            
            {element = num;}
            if(num == element)

            {
                count+=1;
            }
            
            else{count-=1;}
        }
        return element;
        
    }
};



