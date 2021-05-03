class Solution {
public:
    void r(vector<int>&nums,int s,int e)
    {
        while(s<e)
        {
            int temp=nums[s];
            nums[s++] = nums[e];
            nums[e--]=temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        k%=nums.size();
        r(nums,0,nums.size()-1);
        r(nums,0,k-1);
        r(nums,k,nums.size()-1);
            
        
    }
};
