#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int ans = pow(2,n);
    long long int temp = ans;
    long long int sum = 0;
    while(ans>0){
        sum = sum + ans%10;
        ans = ans/10;
    }
    cout<<temp<<endl;
    cout<<sum<<endl;
    return 0;
}