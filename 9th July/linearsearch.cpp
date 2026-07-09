#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums = {12,40,32,90,49,69};
    int index=-1;
    int target=49;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target)
        {
            index=i;
            break;
        }
    }
    cout<<index;
    return 0;
}