class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector <vector<int>> a;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            
            int target = -nums[i];
            
            int l = i + 1, h = nums.size() - 1;
            
            while(l < h)
            {
                int sum = nums[l] + nums[h];
                
                if(sum < target)
                    l++;
                
                else if(sum > target)
                    h--;
                
                else {
                    vector<int> b = {nums[i], nums[l], nums[h]};
                    a.push_back(b);
                
                    while(l < h && nums[l] == b[1]) 
                        l++;  
                
                        while(l < h && nums[h] == b[2]) 
                            h--;  
                }
            }
            
            while(i+1 < nums.size() && nums[i] == nums[i+1])
                i++;
            
        }
        return a;
    }
};
