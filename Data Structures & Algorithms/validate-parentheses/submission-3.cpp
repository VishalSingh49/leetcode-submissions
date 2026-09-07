class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        
        for (char c : s) {
            // If we see an open bracket, push the CLOSING bracket we need to see later
            if (c == '(') ans.push(')');
            else if (c == '{') ans.push('}');
            else if (c == '[') ans.push(']');
            
            // If it's a closing bracket, it MUST match the top of the stack
            // We must also check that the stack isn't empty first
            else if (ans.empty() || ans.top() != c) {
                return false;
            } 
            else {
                ans.pop(); // The match is correct, pop it
            }
        }
        
        return ans.empty();
    }
};
