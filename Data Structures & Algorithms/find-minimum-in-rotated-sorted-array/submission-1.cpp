class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int high = nums.size()-1;
        int min1 = INT_MAX;

        while(low <= high){
            int mid = low + (high - low )/2;
            min1 = min(min1 , nums[low]);

            if(nums[mid] < nums[low])
                high--;

            else
                low++;

        }
        return min1;

        
    }
};
