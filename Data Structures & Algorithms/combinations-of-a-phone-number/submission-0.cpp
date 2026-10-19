class Solution {
public:
unordered_map<char, std::string> check = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };
    vector<string> finalans;
    void solve(string digits , string ans ,int index){

        if(index >= digits.length()){
            finalans.push_back(ans);
            return;
        }


        char current_digit = digits[index];
        string temp = check[current_digit];
        for(char x : temp){
            solve(digits , ans + x  ,index+1);
        }

        
    }
    vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
            return finalans;
        }
        // Start recursion with an empty combination ("") at index 0
        solve(digits, "", 0);
        
        return finalans;
        
    }
};
