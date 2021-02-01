#include<bits/stdc++.h>
using namespace std;
int f[200001];
int main()
{
    int n,i,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>i;
        ans+=!f[i-1];
        ++f[i];
    }
    cout<<ans;
    return 0;
}