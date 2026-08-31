class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int num : nums){
            map[num]++;
        }
        vector<pair<int,int>> vec;
        for(auto [key, value] : map){
            vec.push_back({value, key});
        }
        sort(vec.begin(), vec.end(), 
            [](pair<int, int> a, pair<int, int> b){ 
            return a.first < b.first;
            }
        );
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(vec.back().second);
            vec.pop_back();
        }
        return res;
    }
};
