#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    int product=1;
    cout<<"Enter number how many number you want in array:"<<endl;
    cin>>num;
    int arr[num];
    //input
    for(int i=0;i<num;i++ ){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];

    }
    cout<<"The array is :"<<endl;
    //output
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" "<<endl;
        //sum
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"The sum of array is "<<sum<<endl;
    cout<<"The product of array is "<<product<<endl;

    return 0;
}