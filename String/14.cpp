class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return {};
        }
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        string result;
        int len = min(first.length() , last.length());
        for(int i = 0 ; i < len ; i++) {
            if(first[i] == last[i]) {
                result+=first[i];
            }
            else break;
        }
        return result;
        
    }
};