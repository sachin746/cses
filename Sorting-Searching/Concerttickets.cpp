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
    ll n,m;
    cin>>n>>m;
    multiset<int,greater<int>>price;
    while(n--){
        int i;
        cin>>i;
        price.insert(i);
    }
    while(m--){
        int mp;
        cin>>mp;
        auto it =price.lower_bound(mp);
        if(it==price.end()){
            cout<<-1<<endl;
        }else{
            cout<<*it<<endl;
            price.erase(it);
        }
    }

}