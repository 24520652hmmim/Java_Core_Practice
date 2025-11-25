class Solution {
public:
    string reverse(const string& s){
        string reverseStr;
        for(int i = s.length() - 1; i >= 0; i--) {
            reverseStr+=s[i];
        }
        return reverseStr;
    }
    bool isPalindrome(string s) {
        string alnumericStr;
        for(char c : s) {
            if(isalnum(c)) {
                alnumericStr += tolower(c);
            }
        }
        string reverseStr = reverse(alnumericStr);
        return alnumericStr == reverseStr;
    }
};