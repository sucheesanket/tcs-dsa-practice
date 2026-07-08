#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    vector <int> arr(n);
    int largest=INT_MIN;
    int seclarge=INT_MIN;
    cout<<"Enter the element of array entering space :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(largest<arr[i]){
            // largest=arr[i];
            seclarge=largest;
            largest=arr[i];
        }

    }
    cout<<"the largest is "<<largest<<endl;
    cout<<"the seclargest is "<<seclarge<<endl;
    return 0;
}
