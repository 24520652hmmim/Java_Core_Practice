class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int result = 0;
        unordered_set<char> seen;
        int left = 0;

        for (int right = 0; right < n; right++) {
            char c = s[right];
            while (seen.count(c)) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(c);
            result = max(result, right - left + 1);
        }
        return result;
    }
};
