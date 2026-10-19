class Solution {
public:
    void backtrack(vector<int> ans ,vector<int>& nums ,int pos, vector<vector<int>>&final_ans){
        if(pos == nums.size()){
            sort(ans.begin(),ans.end());
            int check = 0;
            for( auto a: final_ans){
                if(a == ans) check = 1;}
            
            if(check == 0)
                final_ans.push_back(ans);
            
            return;

        }

        
        backtrack(ans,nums,pos+1,final_ans);//not taken
        ans.push_back(nums[pos]);
        backtrack(ans, nums,pos+1,final_ans);//taken


    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>final_ans;
        vector<int> ans;
        backtrack(ans,nums,0,final_ans);

        return final_ans;
        
    }
};
