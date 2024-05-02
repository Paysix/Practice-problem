// leetcode 91 - decode ways
// To decode an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways).
// Using dynamic programming to solve the problem.
// 'left' is the number of combination before s[i], 'right' is the current number of combination.

class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') return 0;
        if (s.length() == 1) return 1;
        int left = 1;
        int right = 1;
        for (int i = 1; i < s.length(); ++i) {
            int tr = s[i] - '0';
            int tl = (s[i-1]-'0')*10 + tr;
            int tres = 0;
            if (tr > 0) {
                tres += right; 
            }
            if (tl >= 10 && tl <= 26) {
                tres += left;
            }
            left = right;
            right = tres;
        }
        return right;
        
    }
};
