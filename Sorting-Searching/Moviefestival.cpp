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
    vector<pair<ll, ll>> v;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a, c;
        cin >> c >> a;
        v.pb(mk(a, c));
    }
    sort(all(v));
    ll curr = v[0].first;
    ll ans = 1;
    for (ll i = 1; i < n; i++)
    {
        if (v[i].second >= curr)
        {
            curr = v[i].first;
            ans++;
        }
    }
    cout<<ans<<endl;
}