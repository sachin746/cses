#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
      ll n;
      cin>>n;
      ll q=(n*(n+1))/2;
      if(q%2==0){
          cout<<"YES\n";
          q=q/2;ll sum=0,a[n],j=0,k,l;
          for(int i=1;i<=n;i++){
              j++;
              sum+=i;
              a[i]=i;
              if(sum>=q){
                  if(sum==q){
                      a[i+1]=-1;
                        k=i+1;
                      break;
                  }else{
                      a[sum-q]=0;
                      l=sum-q;
                      j--;
                      a[i+1]=-1;
                        k=i+1;
                      break;
                  }
                  
              }
          }
          cout<<j<<endl;
          for(int i=1;a[i]!=-1;i++){
              if(a[i]!=0){
                  cout<<i<<" ";
              }
          }
          cout<<endl<<n-j<<endl;
          for(int i=k;i<=n;i++){
              cout<<i<<" ";
          }
          if(sum!=q)cout<<l;
      }else{
          cout<<"NO";
      }
}