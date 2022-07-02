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
void solve(){
   ll a1,b1; cin>>a1>>b1;
   ll a=min(a1,b1);
   ll b=max(a1,b1);
   if((b-a)&1)
   cout<<-1<<endl;
   else if(a==0 and b==0)
      cout<<0<<endl;
      else if(a==b)
      cout<<1<<endl;
      else
      cout<<2<<endl;


}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
      ll t=1;
      cin>>t;
      while(t--)
      solve();
     return 0;
}