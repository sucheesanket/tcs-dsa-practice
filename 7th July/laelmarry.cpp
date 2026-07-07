// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4]={10,12,690,128};
//     int bigger=arr[0];
//     for(int i=1;i<4;i++){
//         if(bigger<arr[i]){
//             bigger=arr[i];
//         }
//     }
//     cout<<"the bigger element is "<<bigger<<endl;
//     return 0;

// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    // int arr[n];
    vector<int> arr(n);
    cout<<"Enter the element of array with space:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int bigger=arr[0];
    for(int i=1;i<n;i++){
        if(bigger<arr[i]){
            bigger=arr[i];
        }
    }
    cout<<"the bigger element is "<<bigger<<endl;
}