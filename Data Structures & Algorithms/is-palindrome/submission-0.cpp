class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low<=high){
            while(!isalnum(s[low]) && low < high)
                low++;
            while(!isalnum(s[high]) && low < high)
                high--;

            if(toupper(s[low]) != toupper(s[high]))
                return false;
            
            low++;
            high--;
        }
        return true;
        
    }
};
