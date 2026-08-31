class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> set;
        for(int i = 2; i < nums.size(); i++){
            int val = nums[i];
            int diff = -val;
            int left = 0;
            int right = i - 1;
            while(left < right){
                if(nums[left] + nums[right] == diff){
                    vector<int> curr;
                    curr.push_back(nums[left]);
                    curr.push_back(nums[right]);
                    curr.push_back(nums[i]);
                    if(!set.count(curr)) {
                        res.push_back(curr);
                        set.insert(curr);
                    }
                    
                    right--;
                    left++;
                }
                else if(nums[left] + nums[right] > diff){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return res;
    }
};
