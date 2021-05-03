class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size(),i,n1=0,n2=INT_MIN;
        for(i=0;i<n;i++)
        {
            n1 += nums[i];
            n2 = max(n1,n2);
            if(n1 < 0) n1 = 0;
        }
        return n2;
        
    }
};
