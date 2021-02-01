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

int minsteps(int n,int ans){
    if(n==1){
        return ++ans;
    }
    ans=minsteps(n-1,ans);
    ans++;
    ans=minsteps(n-1,ans);
}

int tower(int n,int a,int b,int c){
    if(n==1){
        cout<<a<<" "<<c<<endl;
        return 0;
    }
    tower(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    tower(n-1,b,a,c);
}

int main()
{
    int n,ans=0,a=1,b=2,c=3;
    cin>>n;
    ans+=minsteps(n,ans);
    cout<<ans<<endl;
    tower(n,a,b,c);
}