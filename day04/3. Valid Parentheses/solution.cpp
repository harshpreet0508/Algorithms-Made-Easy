class Solution {
public:
    bool isValid(string s) {
        
        stack<char>a;
        int i;
        char x;
        
        for(i=0;i<s.length();i++)
        {
            if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                a.push(s[i]);
                continue;
            }
            
            if(a.empty())
                return false;
            
            switch(s[i])
            {
                case '}':
                    x = a.top();
                    a.pop();
                    if(x=='['||x=='(')
                        return false;
                    break;
                    
                case ')':
                    x = a.top();
                    a.pop();
                    if(x == '['||x == '{')
                        return false;
                    break;
                    
                case ']':
                    x = a.top();
                    a.pop();
                    if(x == '{'||x == '(')
                        return false;
                    break;
                    
            }    
            
        }
        return (a.empty()); 
    }
};
