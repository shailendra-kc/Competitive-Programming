#include<bits/stdc++.h>
#define mod 1000000007
//#define int long long;
//dp se soch;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     int ans=0;
     for(int i=1;i<=k;i++){
         if(2*i+1>k){
            break;
         }
         ans++;
     } 
     ans=n-ans-1;
      cout<<ans<<endl;
      for(int i=k+1;i<=n;i++){
           cout<<i<<" ";
      }
    for(int i=k-1;i>=1;i--){
        
        
        
        cout<<i<<" ";
         if(2*i-1<=k){
     break;
 }
     }
       
     cout<<endl;
     }
return 0;
}