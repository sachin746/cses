#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,n,q=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            q+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }cout<<q;
}