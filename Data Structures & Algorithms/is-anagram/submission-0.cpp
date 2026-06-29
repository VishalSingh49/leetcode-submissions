class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int n = s.size();
        int check =0;
        for(int i = 0;i<s.size(); i++){
            if(s[i] == t[i] ) check++;
        }
        if(n==check) return true;
        return false;
        
    }
};