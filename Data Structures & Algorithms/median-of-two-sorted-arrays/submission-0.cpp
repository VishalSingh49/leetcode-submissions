class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i=0,j=0;
        vector<int> final;
        final.reserve(n1 + n2);
        while (i<n1 && j<n2){
            if(nums1[i] <= nums2[j] ){
                final.push_back(nums1[i]);
                i++;
            }
            else{
                final.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1) final.push_back(nums1[i++]);
        while(j<n2) final.push_back(nums2[j++]);
       // sort(final.begin(),final.end());
        int sum = 0;
        int l = final.size();
        if(l%2==1){
            return static_cast<double>(final[l/2]);
        }
        else{ 
            return (static_cast<double>(final[l/2]) + static_cast<double>(final[l/2 - 1]))/2.0;
          
        }

        }

};