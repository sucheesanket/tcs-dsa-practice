#include<iostream>
using namespace std;
int main(){
    int n,rev=0,digit;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    cout<<"The reverse number is "<<rev<<endl;
    return 0;
}