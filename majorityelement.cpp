//Moore's voting algorithm 
//most optimised solution


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0;
        int element = 0;
        for(int num : nums){
            if(counter == 0)
            {element = num;}
            if(num == element)
            {
                counter+=1;
            }
            else{counter-=1;}
        }
        return element;
        
    }
};
