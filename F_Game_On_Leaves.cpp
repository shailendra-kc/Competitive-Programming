#include<bits/stdc++.h>
using namespace std; 
#define mod 1e9+7
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
#define dbg(v) for(auto i : v) cout<<i<<" ";
#define int long long
void solve()
{  

    int n,x;cin>>n>>x;

    vector<int> deg(n+1,0);
     vector<vector<int>> tree(n+1);
    for(int i=1;i<n;i++)
    {
        int u,v;cin>>u>>v;
        deg[u]++;
        deg[v]++;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
     
     if(deg[x]==1 or n==1)
     {
         cout<<"Ayush"<<endl;
     }
     else if(n%2)
     {
         cout<<"Ashish"<<endl;
     }
     else
     {
         cout<<"Ayush"<<endl;
     }
   //bool ff=1;
   //vector<int> ans;
   //for(int i=1;i<n;i++)
   //{
   //     queue<int> q;
   //     int cnt =0;
   //    for(int a=1;a<=n;a++)
   //    {
   //        if(deg[a]==1)
   //        {
   //            q.push(a);
   //            deg[a]=0;
   //            cnt++;
   //        }
   //    }
   //     bool f=0;
   //    while(!q.empty())
   //    {
   //        int xx=q.front();
   //        q.pop();
   //         for(auto ii : tree[xx])
   //         {
   //             deg[ii]--;
   //         }
   //        if(xx=x)
   //        {
   //            f=1;
   //        }
   //    }

   //    if(f)
   //    {
   //        if(cnt%2==0)
   //        {
   //            cout<<"Ayush"<<endl;

   //        }
   //        else
   //        {
   //            cout<<"Ashish"<<endl;

   //        }
   //        break;
   //    }


   //}
}

int32_t main()
{
     IOS
    // sieve();
      test_case 
     solve();
     return 0;
}