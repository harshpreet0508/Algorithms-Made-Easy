class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int a=0,b=0,t=0;
        for(int i=2;i<cost.size()+1;i++)
        {
            t = a;
            a = min(cost[i-1] + a ,cost[i-2] + b);
            b = t;
        }
        return a;
    }
};
