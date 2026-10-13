class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin() , piles.end());
        int mid = 0;
        while(left < right){
            mid = left + (right - left)/2;
            long long hours = 0;
            for(int a:piles){
                hours += ( a + mid - 1) / mid;
            }
            
            if (hours <= h)
                right = mid;

            else
                left = mid+1;

        }

        return left;
    }
};
