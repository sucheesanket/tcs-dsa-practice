// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter number:"<<endl;
//     cin>>num;
//     if(num==1){
//         cout<<"The number is a prime number.";
//         return 0;

//     }
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             cout<<"The number is not a prime number"<<endl;
//             return 0;
//         }
//     }
//     cout<<"The number is a prime number.";
    

// }

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number "<<endl;
    cout<<"Enter second number "<<endl;
    cin>>num1>>num2;
    for(int i=num1;i<num2;i++){
        if (i<2) continue;
        bool isPrime=true;
        for (int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<' ';
        }
        
    }
    return 0;
    
}