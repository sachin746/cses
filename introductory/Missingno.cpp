#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n,i,q=0;
    cin>>n;
    ll a[n-1];
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    sort(a,a+(n-1));
    for(i=1;i<n;i++){
        if(a[i-1]!=i){
            cout<<i;
            q++;
            break;
        }
    }
    if(q==0){
        cout<<n;
    }
}