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
#define mod 1000000007

void decToBinary(int n,int s)
{ 
   int binaryNum[32]; 
   int binaryNum1[32];
    int k = 0; 
    while (n > 0) { 
  
        binaryNum[k] = n % 2; 
        n = n / 2; 
        k++; 
    } int l=k,i;
    for(i=k;i<s;i++){
        binaryNum[i]=0;
    }l=0;
    for (int j = i - 1; j >= 0; j--) 
    {  
         binaryNum1[l]=binaryNum[j]; l++;
    }
    cout<<binaryNum1[0];
    for(i=1;i<l;i++){
        cout<<(binaryNum1[i]xor binaryNum1[i-1]);
    }
} 

int main()
{
    ll n,j=1;
    cin >> n;
    rep(i,n){cout<<0;}
    cout<<endl;
    while (j < pow(2,n)){
        decToBinary(j,n);
        cout<<endl;
        j++;
    }
}