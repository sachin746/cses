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
    int n;
    cin>>n;
    int ans=1;
   rep(i,n){
       ans=(ans*2)%mod;
   }
   cout<<ans;
}