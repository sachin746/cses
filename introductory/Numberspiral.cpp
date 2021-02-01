#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y,q;
        cin>>y>>x;
        if(x>y){
            if(x%2==0){
                q=(x-1)*(x-1)+y;
            }else{
                q=(x)*(x)-y+1;
            }
        }
        else if(y>x){
            if(y%2==0){
                q=(y)*(y)-x+1;
            }else{
                q=(y-1)*(y-1)+x;
            }
        }
        else{
            q=x*x-y+1;
        }
        cout<<q<<endl;
    }
}