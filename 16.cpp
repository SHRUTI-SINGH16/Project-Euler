#include<iostream>
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int128_t ans = pow(2,n);
    int128_t temp = ans;
    int128_t sum = 0;
    while(ans>0){
        sum = sum + ans%10;
        ans = ans/10;
    }
    cout<<temp<<endl;
    cout<<sum<<endl;
    return 0;
}