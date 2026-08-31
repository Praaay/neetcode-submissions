class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string bsearch(const vector<pair<int, string>>& vec, int timestamp){
        if(vec.empty()) return "";
        int l = 0;
        int n = vec.size();
        int r = n - 1;
        int ans = -1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(vec[m].first <= timestamp){
                ans = m;
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        return ans == -1 ? "" : vec[ans].second;
    }
    string get(string key, int timestamp) {
        vector<pair<int, string>> curr = mp[key];
        string res = bsearch(curr, timestamp);
        return res;
    }
};
