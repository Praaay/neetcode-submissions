class Solution {
public:
    bool isPalindrome(string s) {
        string us = "";
        for(char c : s){
            if(isalnum(c)){
                us += tolower(c);
            }
        }
        int l = 0;
        int r = us.size() - 1;
        while(l <= r){
            if(us[l] != us[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
