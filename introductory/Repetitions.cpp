#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,q=1;
    string s;
    cin >> s;
    ll max=1;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]!=s[i-1]){
            if(max<q){
                max=q;
            }
            q=1;

        }else{
            q++;
        }

    }
    if(max<q){
        max=q;
    }
    cout<<max;
}