#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0],seclarge=INT_MIN;
    for(int i=1;i<n;i++){
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        
        if (arr[i] != largest && arr[i] > seclarge){
            seclarge=arr[i];
        }
        
        
    }
    cout << "The second largest element is " << seclarge << endl;
    return 0;
}