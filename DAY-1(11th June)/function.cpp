#include<iostream>
using namespace std;
// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }

int num_sum(int num){
    int last_digit,sum=0;
    while(num!=0){

        last_digit=num%10;
        num=num/10;
        sum=sum+last_digit;
    }
    return sum;

    
}

int main(){
   cout<<num_sum(124598574);
    return 0;
}