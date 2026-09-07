class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> suffix(n);
        vector<int> prefix(n);
        prefix[0] = height[0];
        suffix[n-1] = height[n-1];
        for(int i = 1;i<n;i++){
            prefix[i] = max(height[i],prefix[i-1]);
        }
        for(int i = n-2;i>=0;i--){
            suffix[i] = max(height[i],suffix[i+1]);
        }
        int sum = 0;
        for(int i = 1;i<n-1;i++){
            int a = min(suffix[i+1] , prefix[i-1]);
            if(a > height[i])
                sum= sum + a - height[i];
               
        }
        return sum;
        
    }
};
