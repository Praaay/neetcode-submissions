class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int ans = 1;
        int currans = 1;
        int curr = nums[0];
        int n = nums.size();
        int i = 1;
        while(i < n){
            if(nums[i] == curr){
                i++;
                continue;
            }
            else if(nums[i] == curr + 1){
                curr = nums[i];
                currans++;
            }
            else{
                ans = max(ans, currans);
                currans = 1;
                curr = nums[i];
            }
            i++;
        }
        ans = max(ans, currans);
        return ans;
    }
};
