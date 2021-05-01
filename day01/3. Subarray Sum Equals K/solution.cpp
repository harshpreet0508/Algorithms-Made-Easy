class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0,s=0;
        unordered_map<int,int>m;
        for (int i=0;i<nums.size();i++)
        {
            s += nums[i];
            if(s == k)
                c++;
            if(m.find(s-k) != m.end())
                c += m[s-k];
            m[s]++;
        }
        return c;
    }
};
