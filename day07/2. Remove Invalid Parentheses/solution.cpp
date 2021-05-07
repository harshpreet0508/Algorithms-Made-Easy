class Solution {
public:
    unordered_set<string>ans;
    vector<string>v;
    
    void solution(string s,int mra){
        
        if(mra < 0) return;
        if(mra == 0)
        {
            if(getMin(s) == 0) {
                
                v.push_back(s);
            }
            return;
                
        }
        
        for(int i=0;i<s.size();i++)
        {
            
            string l = s.substr(0,i); //0 to i-1
            string r = s.substr(i+1);
            
            if(ans.find(l+r) == ans.end()){
                ans.insert(l + r);
                solution(l+r,mra-1);
            }
        }
    }
    
    int getMin(string s){
        
        stack<char>st;
        for(int i=0;i<s.length();i++) {
            char ch = s[i];
            if(ch == '(')
                st.push(ch);
            
            else if(ch == ')')
            {
                if(st.size() == 0) st.push(ch);
                
                else if(st.top() == ')') st.push(ch);
                
                else if(st.top() == '(') st.pop();
                
            }
        }
        return st.size();
    }
    
    
    vector<string> removeInvalidParentheses(string s) {
        
        int mra = getMin(s);
        
        solution(s,mra);
        return v;
    }
};
