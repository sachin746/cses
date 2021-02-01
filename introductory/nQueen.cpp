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

int isSafe(int a[][],int x,int y,int n){
    for(int i=0;i<n;i++){
        if(a[i][y]==1){
            return false;
        }
    }
}

int main()
{
    int a[8][8];
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
        }
    }

}