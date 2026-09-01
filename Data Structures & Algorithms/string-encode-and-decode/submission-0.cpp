class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for(string s : strs){
            res += to_string(s.size());
            res += ".";
            res += s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0, n = s.size();
        while(i < n){
            int len = 0;
            while(isdigit(s[i])){
                len = len*10 + (s[i] - '0');
                ++i;
            }
            if(s[i] == '.') i++;
            string curr = s.substr(i, len);
            res.push_back(curr);
            i = i + len;
        }
        return res;
    }
};
