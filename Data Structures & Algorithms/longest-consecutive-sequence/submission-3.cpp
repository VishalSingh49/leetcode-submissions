class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        
        unordered_set st(nums.begin(),nums.end());
        int longest = 0;

        for( int num :st){
            if(st.find(num-1) == st.end()){

                int current = num;
                int length = 1;

                while(st.find(current+1) != st.end()){
                    length++;
                    current++;
                }
                longest = max(longest , length);

            }
        }
        return longest;
    }
};
