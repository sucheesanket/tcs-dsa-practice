class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int left=0;
        int maxLength=0;
        for(int right=0;right<s.length();right++){
            while(charset.count(s[right])>0){
                charset.erase(s[left]);
                left++;

            }
            charset.insert(s[right]);
            maxLength=max(maxLength,right-left+1);
        }
        return maxLength;
    }
};
// leetcode 3