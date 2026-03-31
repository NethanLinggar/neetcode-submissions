class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end());

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });

        string t = s;
        reverse(t.begin(), t.end());

        return s == t;
    }
};