class Solution {
public:   
    
    int rob(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        if(nums.size() == 1)
            return nums[0];
        
        int a = nums[0],c = 0;
        int b = max(nums[0],nums[1]);
        
        for(int i=2;i<nums.size();i++)
        {
            c = max(nums[i] + a, b);
            a = b;
            b = c;
        }
       return max(a,b);
    }
};
