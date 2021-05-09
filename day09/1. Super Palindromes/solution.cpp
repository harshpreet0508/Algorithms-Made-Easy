class Solution {
public:
    int superpalindromesInRange(string left, string right) {
        
        long l = stol(left), r = stol(right);
        int c=0;
        string s;
        
        for(int i=1;i<100000;i++) { //even length
            s = to_string(i);
            for(int j=s.length()-1;j>=0;j--)
            {
                s+=s[j];
            }
            long v = stol(s);
            v*=v;
            if(v>r) break;
            else if(v>=l && isPal(v)) c++;
        }
        
        for(int i=1;i<100000;i++) { //odd length
            s = to_string(i);
            for(int j=s.length()-2;j>=0;j--)
            {
                s+=s[j];
            }
            long v = stol(s);
            v*=v;
            if(v>r) break;
            else if(v>=l && isPal(v)) c++;
        }
        return c;
    }
    
    bool isPal(long n)
    {
        long r=0,a=n;
        while(n>0)
        {
            r=r*10+n%10;
            n/=10;
        }
        if(a==r)
            return true; 
        return false;
    }
};
