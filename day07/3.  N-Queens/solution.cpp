class Solution {
public:
    void helper(vector<vector<string>>&res,vector<string>&q,int r,int &n){
        
        if(r==n){
            res.push_back(q);
            return;
        }
        for(int c=0;c<n;c++)
        {
            if(isSafe(q,r,c,n)){
                q[r][c]='Q';
                helper(res,q,r+1,n);
                q[r][c]='.';
            }
        }
        
    }
    bool isSafe(vector<string>&q,int r,int c,int &n)
    {
        for (int i=0;i!=r;i++)
            if (q[i][c] == 'Q')
                return false;
        
        for (int i=r-1,j=c-1;i>=0&&j>=0;i--,j--)
            if (q[i][j] == 'Q')
                return false;
        
        for (int i=r-1,j=c+1;i>=0&&j<n;i--,j++)
            if (q[i][j] == 'Q')
                return false;
        return true;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;
        vector<string> q(n, string(n, '.'));
        helper(res,q,0,n);
        return res;
        
    }
    
};
