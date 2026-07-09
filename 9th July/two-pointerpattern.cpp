#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,1,2,2,3,4,4,5,6,6,6,6};
    
    int j=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[i-1]){
            j++;
            arr[j]=arr[i];
        }
        
    }
    cout<<"The total unique numbers are "<<j+1<<endl;
    cout<<"The unique numbers in array is :"<<endl;
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}