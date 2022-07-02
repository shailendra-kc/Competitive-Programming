#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define digit floor(log10(n) + 1) 
#define ll long long
#define ld long double 
#define test_case ll t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
#define int long long
void solve()
{
       int n;cin>>n;
       map<int,int>mp;
       loop(i,0,n)
       {
           int x;cin>>x;
           mp[x]++;
       }
        
  
  vi v,u;
  for(auto i :mp)
  {
      v.push_back(i.second);
  }
  sort(all(v));

  for(int i =0;i<v.size();i++)
  {
      if(i==0)
       u.push_back(v[i]);
       else
       u.push_back(u.back()+v[i]);
  }
  int ans =INT_MAX;
 int nn=v.size();
  for(int i=0;i<nn;i++)
  {
      if(i==0)
      {
          ans=min(ans,u[nn-1]-u[i]-(nn-1-i)*v[i]);
      }
      else
      {
          ans=min(ans,u[nn-1]-u[i]-(nn-1-i)*v[i]+u[i-1]);
      }
  }

  cout<<ans<<endl;
     
  

}  

int32_t main()
{
     IOS
      test_case
     solve();
     return 0;
}