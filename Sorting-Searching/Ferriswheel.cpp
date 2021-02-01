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

int main()
{
    ll n,x,ans=0;
    cin>>n>>x;
    ll a[n];
    rep(i,n)cin>>a[i];
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            ans++;
            i++;j--;
        }else{
            j--;
            ans++;
        }
    }
    cout<<ans<<endl;
}