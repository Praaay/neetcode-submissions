class Solution {
public:
    unordered_set<int> set;
    bool hasDuplicate(vector<int>& nums) {
        for(int num: nums){
            if(set.find(num) != set.end()){
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};