#include<bits/stdc++.h>
using namespace std; 
#define    mod 1000000007
#define    digit floor(log10(n) + 1) 
#define    ll long long
#define    ld long double 
#define    test_case ll t;cin>>t;while(t--)
#define    IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define    all(v) begin(v),end(v)
#define    loop(i,x,y) for(ll i=x;i<y;i++)
#define    loop1(i,y,x) for(ll i=y;i>=x;i--)
#define    yes cout<<"YES"<<endl;
#define    no cout<<"NO"<<endl;
#define    vll vector<ll>
#define    vi vector<int>
#define    max_heap priority_queue <ll>
#define    min_heap priority_queue <ll, vector<ll>, greater<ll> >
#define    bs(v,x) binary_search(begin(v),end(v),x)
#define    lb(v,x) lower_bound(all(v),x)-begin(v)
#define    ub(v,x) upper_bound(all(v),x)-begin(v)
#define    Map map<ll,ll>
#define    Umap unordered_map<ll,ll>
#define    Set set<ll>
#define    Uset unordered_set<ll>
#define    total(v) accumulate(begin(v),end(v),0LL)
#define    dbg(v) for(auto i : v) cout<<i<<" ";
#define    int long long
void solve()
{
   int n;cin>>n; 
   vi v(n); loop(i,0,n)cin>>v[i];
   map<int,int> odd , even;

   vi u=v;
   sort(all(u));

   for(int i=1;i<=n;i++)
   {
       if(i%2==0)
       {
           even[u[i-1]]++;
       }
       else
       {
           odd[u[i-1]]++;
         
       }
   } 
   int ok =1;
   for(int i=1;i<=n;i++)
   {
      
      
      
           if(i%2)
           {
              if(odd[v[i-1]]>=1)
               odd[v[i-1]]--;
               else
               {
                   ok=0;
                   break;
               } 

           }
           else
           {
               if(even[v[i-1]]>=1)
               {
                   even[v[i-1]]--;

               }
               else
               {
                   ok=0;
                   break;
               }

           }
       
   }

   if(ok)
   yes
   else
   no

}  

int32_t main()
{
     IOS
     test_case 
     solve();
     return 0;
}