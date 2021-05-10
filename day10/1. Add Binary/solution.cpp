class Solution {
public:
    string addBinary(string a, string b) {
        
        int i=a.length()-1,j=b.length()-1;
        int c=0;
        string r;
        
        while(i>=0||j>=0)
        {
            int s = c;
            s += i>=0?a[i--]-'0':0;
            s += j>=0?b[j--]-'0':0;
            c = s > 1 ? 1 : 0;
            r += to_string(s%2);
        }
        if(c) r += '1';
        reverse(r.begin(),r.end());
        return r;
    }
};
