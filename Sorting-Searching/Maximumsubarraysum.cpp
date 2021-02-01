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

int main(){
    ll n;
    cin>>n;
    ll v[n];
    rep(i,n){
        cin>>v[i];
    }
    ll sum=0,max=INT_MIN;
    rep(i,n){
            ll sum1=v[i];
            sum+=v[i];
            if(sum1>sum)sum=sum1;
            if(sum>max){
                max=sum;
            }
    }
    cout<<max;
}