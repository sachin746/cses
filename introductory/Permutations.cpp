#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    if(n==1){cout<<1;}
    else if(n==4){cout<<2<<' '<<4<<" "<<1<<' '<<3;}
    else if(n>4){
        int q=1;
        while(q<=n){
            cout<<q<<" ";
            q+=2;
        }
        q=2;
        while(q<=n){
            cout<<q<<" ";
            q+=2;
        }
    }else{
        cout<<"NO SOLUTION";
    }
    
}