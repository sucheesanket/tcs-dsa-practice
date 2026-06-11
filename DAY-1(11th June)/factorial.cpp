#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact*i;

    }
    cout<<"So the factorial of the number "<<fact;
    return 0;
}