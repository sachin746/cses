#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
#define all(x) x.begin(),x.end()
#define mod 1000000007

int mindiff(ll a[],int n,ll total){
    ll min=INT_MAX;
   
    for(int i=0;i<(1<<n);i++){
         ll count=0;
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                count+=a[j];
            }
        }
        count=2*count-total;
        if(count<0)count=-count;
        if(min>count){
            min=count;
        }
    }
    cout<<min;
}

int main()
{
    int n;
    cin>>n;
    ll a[n],ttl=0;
    rep(i,n){
        cin>>a[i];
        ttl+=a[i];
    }
    mindiff(a,n,ttl);
}