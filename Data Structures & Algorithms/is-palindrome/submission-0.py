class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = re.sub(r'[^a-zA-Z0-9]', '', s.lower())
        r = "".join(reversed(s))
        return s == r
