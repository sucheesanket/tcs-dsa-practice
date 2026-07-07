#include<iostream>
using namespace std;
int main(){
    int a,s,d;
    cout<<"Enter three numbers :"<<endl;
    cin>>a>>s>>d;
    if(a>=d&&a>=s) cout<<a<<" is largest"<<endl;
    else if(s>=a&&s>=d) cout<<s<<" is largest"<<endl;
    else cout<<d<<" is largest"<<endl;
    return 0;
}