class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 0);
        vector<int> suffix(nums.size(), 0);
        vector<int> res(nums.size(), 1);
        int n = nums.size();
        prefix[0] = 0;
        prefix[1] = nums[0];
        for(int i = 2; i < n; i++){
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }
        suffix[n - 1] = 0;
        suffix[n - 2] = nums[n - 1];
        for(int i = n - 3; i >= 0; i--){
            suffix[i] = nums[i + 1] * suffix[i + 1];
        }
        for(int num : prefix){
            cout << num << endl;
        }
        cout << "suffix begin: " << endl;
        for(int num : suffix){
            cout << num << endl;
        }
        res[0] = suffix[0];
        res[n - 1] = prefix[n - 1];
        for(int i = 1; i < n - 1; i++){
            res[i] = prefix[i] * suffix[i]; // prefix * suffix
        }
        return res;
    }
};
