class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while(l <= r){
            int mid = l+(r-l)/2;
            if(nums[mid] == target)
                return mid;

            else if(nums[mid] >= nums[l]){
                if(nums[mid] >= target && target >= nums[l] )
                    r--;
                else
                    l++;
            }
            else{
                if(target >= nums[mid] && target <= nums[r])
                    l++;
                else
                    r--;
            }
        }
        return -1;
        
    }
};
