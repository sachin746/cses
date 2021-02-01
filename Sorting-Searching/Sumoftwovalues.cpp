#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define all(x) x.begin(), x.end()
#define mod 1000000007

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<int,int>> vp(n);
    rep(i,n){
        ll a;
        cin>>a;
        vp[i]={a,i};
    }
    sort(all(vp));
    ll i=0,j=n-1;
    while(i<j){
        if(vp[i].first+vp[j].first>x){
            j--;
        }else if(vp[i].first+vp[j].first<x){
            i++;
        }else{
            cout<<vp[i].second+1<<" "<<vp[j].second+1;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
}    