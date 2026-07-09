class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int index=-1;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;

            }else if(nums[mid]>target){
                high=mid-1;
                

            }else if (nums[mid]<target){
                low=mid+1;

            }
        }
            return index;
        
    }
};
//704(leetcode)
//preparing for TCS