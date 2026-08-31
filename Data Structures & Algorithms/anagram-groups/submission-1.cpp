class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            if(!map.contains(temp)){
                map[temp] = {s};
            }
            else{
                map[temp].push_back(s);
            }
        }

        vector<vector<string>> res;
        for(auto& [key, val] : map){
            res.push_back(val);
        }
        return res;
    }
};
