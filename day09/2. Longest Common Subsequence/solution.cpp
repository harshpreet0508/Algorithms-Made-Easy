class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        
        if(t1.length()<t2.length())
            swap(t1,t2);
        
        vector<vector<short>>m(2,vector<short>(t2.size()+1));
        
        for(int i=1;i<=t1.length();i++) {
            for(int j=1;j<=t2.length();j++){
                if(t1[i-1]==t2[j-1])
                    m[i%2][j] = m[(i-1)%2][j-1]+1;
                else
                    m[i%2][j]=max(m[(i-1)%2][j],m[i%2][j-1]);
            }
        }
        return m[t1.length()%2][t2.length()];
    }
};
