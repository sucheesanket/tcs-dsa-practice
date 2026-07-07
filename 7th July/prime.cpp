#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    bool isprime =true;
    if (n<=1) isprime=false;
    else{
        for(int i=2;i<n;i++){
           if(n%i==0) {

               isprime=false;
               break;
           }

        }
       
    }
    if(isprime==true) cout<<n<<" is a prime number"<<endl;
    else  cout<<n<<" is not a prime number"<<endl;
    return 0;
}