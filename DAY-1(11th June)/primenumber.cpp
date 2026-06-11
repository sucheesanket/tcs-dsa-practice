#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;
    if(num==1){
        cout<<"The number is a prime number.";
        return 0;

    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"The number is not a prime number"<<endl;
            return 0;
        }
    }
    cout<<"The number is a prime number.";
    

}