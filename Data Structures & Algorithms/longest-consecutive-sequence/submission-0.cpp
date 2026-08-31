class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int curr = nums[0];
        int i = 1;
        int ans = 1;
        int currans = 1;
        while(i < nums.size()){
            
            if(nums[i] == curr){
                i++;
                continue;
            }
            if(nums[i] == curr + 1){
                curr = nums[i];
                ans = max(ans, currans + 1);
                currans++;
            }
            else{
                currans = 1;
                curr = nums[i];
            }
            i++;
        }
        return ans;
    }
};