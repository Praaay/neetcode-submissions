class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) nums1.swap(nums2);
        int l = 0;
        int m = nums1.size(), n = nums2.size();
        int half = (m + n + 1) / 2;
        int r = m;
        while(l <= r){
            int i =  l + (r - l) / 2;
            int j = half - i;
            
            int leftA = (i > 0)? nums1[i - 1] : INT_MIN;
            int rightA = (i < m)? nums1[i] : INT_MAX;
            int leftB = (j > 0)? nums2[j - 1] : INT_MIN;
            int rightB = (j < n)? nums2[j] : INT_MAX;

            if(leftA <= rightB && leftB <= rightA){
                if((m + n) % 2 == 1){
                    return (double) max(leftA, leftB);
                }
                else{
                    return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
                }
            }
            else if(leftA > rightB){ // took too many
                r = i - 1;
            }
            else{ // took too less from A
                l = i + 1;
            }
        }        
        return 0.0;
    }
};
