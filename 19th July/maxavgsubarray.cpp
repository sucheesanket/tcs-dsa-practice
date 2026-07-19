class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxsum;
        double average;
        for (int i=0;i<k;i++){
            sum+=nums[i];
        }
        
        maxsum=sum;
        for(int i=0;i<nums.size()-k;i++){
            sum=sum-nums[i]+nums[k+i];
        }
        if(maxsum<sum){
            maxsum=sum;
        }
        average=maxsum/k;
        return average;


        
    }
};
// tcs prep
// leetcode 643