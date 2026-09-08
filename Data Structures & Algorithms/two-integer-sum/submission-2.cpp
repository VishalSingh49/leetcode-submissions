class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;
        for(int i=0;i<nums.size();i++){
            check[nums[i]] = i;
        }

        for(int i = 0;i<nums.size();i++){
            int diff = target - nums[i];
            if(check.count(diff) && check[diff] != i)
                return{ i , check[diff]};
        }
        return{};
        
    }
};
