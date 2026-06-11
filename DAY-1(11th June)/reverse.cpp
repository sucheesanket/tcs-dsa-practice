#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,remainder;
    cout<<"Enter the value"<<endl;
    cin>>num;
    int onum=num;
    while(num!=0){

        remainder=num%10;
        num=num/10;
        reverse=reverse*10+remainder;
    }

    cout<<"the reverse number is "<<reverse<<endl;
    
    if(reverse==onum){
        cout<<"The number is palindrome number";
    }
    else{
        cout<<"The number is not palindrome number";

    }
    
    return 0;


}