class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int left = 0;
        int n = heights.size();
        int right = n - 1;
        while(left < right){
            int h = min(heights[left], heights[right]);
            int currarea = h * (right - left);
            res = max(res, currarea);
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return res;
    }
};
