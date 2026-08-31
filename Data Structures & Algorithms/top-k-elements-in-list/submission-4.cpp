class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int num : nums){
            map[num]++;
        }
        vector<vector<int>> vec;
        for(auto& [key, val] : map){
            vec.push_back({val, key});
        }
        sort(vec.begin(), vec.end(), greater<vector<int>>());
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(vec[i][1]);
        }

        return res;
    }
};
