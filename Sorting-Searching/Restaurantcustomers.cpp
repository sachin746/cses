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
    ll n;
    cin>>n;
    ll a[n],b[n];
    rep(i,n){
        cin>>a[i];
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int ans=0;
    int max=INT_MIN;
    int i=0,j=0;
    while(j<n&&i<n){
        if(a[i]<b[j]){
            ans++;
            i++;
        }else if(b[j]<a[i]){
            ans--;j++;
        }else if(a[i]==b[j]){
            i++;j++;

        }
        if(max<ans){
            max=ans;
        }
    }cout<<max;
}