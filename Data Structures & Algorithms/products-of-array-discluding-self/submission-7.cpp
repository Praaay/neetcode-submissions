class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix(nums.size(), 0);
        vector<int> suffix(nums.size(), 0);
        int n = nums.size();
        vector<int> res(n, 1);
        prefix[0] = 1;
        prefix[1] = nums[0];
        for(int i = 2; i < n; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        suffix[n-1] = 1;
        suffix[n-2] = nums[n-1];
        for(int i = n-3; i >= 0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        res[0] = suffix[0];
        for(int i = 1; i < n-1; i++){
            res[i] = prefix[i] * suffix[i];
        }
        res[n-1] = prefix[n-1];
        return res;
    }
};
