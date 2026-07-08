#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    bool issort=true;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    vector <int> arr(n);
    
    cout<<"Enter the element of array after space:"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            issort=false;
            break;
        }
    }
    if(issort==false) cout<<"The array is not sorted "<<endl;
    else cout<<"The array is sorted";

    return 0;
}