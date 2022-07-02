#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define digit floor(log10(n) + 1) 
#define ll long long
#define ld long double  
#define all(v) begin(v),end(v)
#define loop(i,x,y) for(ll i=x;i<y;i++)
#define loop1(i,y,x) for(ll i=y;i>=x;i--)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vll vector<ll>
#define vi vector<int>
#define max_heap priority_queue <ll>
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >
#define bs(v,x) binary_search(begin(v),end(v),x)
#define lb(v,x) lower_bound(all(v),x)-begin(v)
#define ub(v,x) upper_bound(all(v),x)-begin(v)
#define Map map<ll,ll>
#define Umap unordered_map<ll,ll>
#define Set set<ll>
#define Uset unordered_set<ll>
#define total(v) accumulate(begin(v),end(v),0LL)
/// faster.
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
void solve(){
   int n;
   cin>>n;
   vi v(n),y(n);
   loop(i,0,n){
       cin>>v[i];
   }
   loop(i,0,n){
       cin>>y[i];
   }
   max_heap h;
   loop(i,0,n){
       if(y[i]==0){
           h.push(v[i]);
       }
   }
   loop(i,0,n){
       if(y[i]==0){
           v[i]=h.top();
           h.pop();
       }
   }
    
   loop(i,0,n){
       cout<<v[i]<<" ";
   } 
   cout<<endl;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
     ll t=1;
     cin>>t;
    // sieve();
     while(t--)
      solve();
     return 0;
}