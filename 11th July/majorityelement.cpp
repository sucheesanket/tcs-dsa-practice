class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;

        }
        for(int i=0;i<n;i++){
            if(map[nums[i]]>n/2){
                return nums[i];
            }
        }
        return 0;
        
    }
};
//tcs preparation
// leetcode 169