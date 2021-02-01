#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i;
    cin>>i;
    for(ll n=1;n<=i;n++){
        cout<<(((n*n)*((n*n)-1))-8-24-((n-4)*16)-16-((n-4)*24)-((n-4)*(n-4)*8))/2<<endl;
    }    
}