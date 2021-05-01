class Solution {
public:
    int fib(int n) {
        
        if (n == 0||n == 1)
            return n;
        
        if(n == 2)
            return 1;
        
        int c = 0, a = 1,b = 1;
        
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        
        return c;
    }
};
