#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
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

    lli n;
    cin>>n;
    lli a[n];
    rep(i,n)cin>>a[i];
    sort(a,a+n);lli sum=0;
    for(lli i=0;i<n;i++){
        if(sum+1<a[i]){
            cout<<sum+1;
            return 0;
        }else{
            sum+=a[i];
        }
    }
    cout<<sum+1;
}