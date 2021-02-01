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
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    ll a[n],b[m];
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]-k<=b[j]){
            if(a[i]+k>=b[j]||a[i]-k==b[j]){
                ans++;
                i++;j++;
            }else{
                i++;
            }
        }else{
            j++;
        }
    }
    cout<<ans<<endl; 
}