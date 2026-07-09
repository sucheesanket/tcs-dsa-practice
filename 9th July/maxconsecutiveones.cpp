class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maximum=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                if(count>maximum){
                    maximum = count;

                }
            } else
                 {
                    count = 0;
                }
        }
        if (maximum > count) {
            return maximum;
        } else {
            return count;
        }
    }
};

//485(leetcode)
//preparing for TCS