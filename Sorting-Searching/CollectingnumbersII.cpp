#include <bits/stdc++.h>
using namespace std;
#define ndl ("\n")
#define pi (3.141592653589)
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define rep(i,n) for(int i=0;i<n;i++)
#define lli long long int
#define li long int
#define ld long double
#define all(x) x.begin(),x.end()
#define mod 1000000007
#define jaldi ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test lli t;cin>>t;while(t--)

int main(){
    jaldi

    lli n,m;
    cin>>n>>m;
    lli v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(m--){
        lli f[200001]={0},ans=0;
        lli a,b;
        cin>>a>>b;
        swap(v[a-1],v[b-1]);
        rep(i,n){
            ans+=!f[v[i]-1];
            ++f[v[i]];
        }
        cout<<ans<<ndl;
    }
    
}
