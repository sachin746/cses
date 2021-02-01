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
    string s;
    cin>>s;
    vector <string>v1;
    sort(all(s));
    do{
        v1.pb(s);
    }while(next_permutation(all(s)));
    cout<<v1.size()<<endl;
    for(string a:v1){
        cout<<a<<endl;
    }

}