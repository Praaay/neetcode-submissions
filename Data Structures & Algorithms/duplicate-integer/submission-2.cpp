class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for(int num : nums){
            if(!set.contains(num)){
                set.insert(num);
            }
            else{
                return true;
            }
        }
        return false;
    }
};