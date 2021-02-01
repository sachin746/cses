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
#define mod 1000000007

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        if(2*a<b){
            cout<<"NO\n";
        }else if((2*a==b)or((a%3)+(b%3))%3==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}