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
    string s;
    cin>>s;
    int f[26]={0};
    rep(i,s.size()){
        f[s[i]-65]++;
    }
    int c=0;
    rep(i,26){
        if(f[i]%2!=0)c++;
    }
    if(c>1)cout<<"NO SOLUTION";
    else{
        vector<char>v1,v2;
        rep(i,26){
            if(f[i]%2!=0){
                while(f[i]--){
                    v2.pb(i+65);
                }
            }else if(f[i]>0 and f[i]%2==0){
                int x=f[i]/2;
                while(x--){
                    v1.pb(i+65);
                }
            }
        }
        rep(i,v1.size()){
            cout<<v1[i];
        }
        rep(i,v2.size())cout<<v2[i];
        for(int i=v1.size()-1;i>=0;i--){
            cout<<v1[i];
        }
    }

}