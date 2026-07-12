// tcs preparation
// leetcode 125 

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }
            if(!isalnum(s[right])){
                right--;
                continue;
            }
           
            tolower(s[left]);
            tolower(s[right]);
            if (tolower(s[left])==tolower(s[right])){
                left++;
                right--;
            }else{
                return false;
            }


        }
        return true;
        
    }
};