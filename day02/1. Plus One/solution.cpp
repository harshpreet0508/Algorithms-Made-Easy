class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        for (int i = digits.size() - 1; i >= 0; i--) {
            
            if (digits[i] < 9) { // less than 9 add 1  
                digits[i]++;
                return digits;  // return
            }
            
            digits[i] = 0;  // 9 -> 0
            
            if(digits[0] == 0)  // first digit = 1
                digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
