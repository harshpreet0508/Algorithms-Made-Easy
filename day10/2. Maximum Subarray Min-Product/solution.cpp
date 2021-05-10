typedef long long ll;
class Solution {
public:
    const int mod=1e9+7;
    int maxSumMinProduct(vector<int>& nums) {
        
        nums.push_back(0);
        int n = nums.size();
        stack<int>st;
        vector<ll>pre(n,0);
        
        ll ans = 0;
        
        pre[0]=nums[0];
        for(int i=1;i<n;i++) 
            pre[i] = pre[i-1] + nums[i];
        
        for(int i=0;i<n;i++)
        {
            if(st.empty()||nums[st.top()]<nums[i])
                st.push(i);
            else
            {
                int id = st.top();
                st.pop();
                ll res =nums[id] * (pre[i-1]-(st.empty()?0:pre[st.top()]));
                
                ans = max(ans,res);
                i--;
            }
        }
        return ans % mod;
        
    }
};
