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

int fun(vector<string> &g)
{
     int r1=301,c1=301,r2=-1,c2=-1;
 for(int i=0;i<g.size();i++)
 {   
     int rr=0;
     int cc=0;
     for(int j=0;j<g.size();j++)
     {
         if(g[i][j]=='1')rr++;
         if(g[j][i]=='1')cc++;
     }
     r1=min(r1,rr);
     r2=max(r2,rr);
     c1=min(c1,cc);
     c2=max(c2,cc);
 }
 int r=abs(r1-r2);
 int c=abs(c1-c2);
   return (r*r+c*c);


}
void solve()
{  
    int n,k;cin>>n>>k;
    string s(n,'1');
     string s1(n,'0');
    vector<string>g(n,s);
    vector<string>g2(n,s1);
    int x=n*n-k;
    for(int i=0;i<n;i++)
    {    
        if(x==0) break;
        if(i==0)
        {
          for(int j=0;j<n;j++)
          {    if(x==0) break;
              g[j][j]='0';
              x--;
          }
        }
        else
        {
            int a=i;

            for(int j=0;j<n;j++)
            {
                if(x==0 or a>=n) break;
                 g[a++][j]='0';
                 x--;
            }
            int b=i;
            for(int j=0;j<n;j++)
            {
                if(x==0 or b>=n) break;
                
                g[j][b++]='0';
                x--;
            }

        }
         if(x==0) break;
    }

    for(int i=0;i<n;i++)
    {    
        if(k==0) break;
        if(i==0)
        {
          for(int j=0;j<n;j++)
          {    if(k==0) break;
              g2[j][j]='1';
              k--;
          }
        }
        else
        {
            int a=i;

            for(int j=0;j<n;j++)
            {
                if(k==0 or a>=n) break;
                 g2[a++][j]='1';
                 k--;
            }
            int b=i;
            for(int j=0;j<n;j++)
            {
                if(k==0 or b>=n) break;
                
                g2[j][b++]='1';
                k--;
            }

        }
         if(k==0) break;
    }

  //  if(fun(g)<=fun(g2))
  //  {
  //      cout<<fun(g)<<endl;
  // for(auto i : g)
  // {
  //     for(auto j : i)
  //     {
  //         cout<<j;
  //     }
  //     cout<<endl;
  // }

  //  }
  //   
  //   else
  //   {
          cout<<fun(g2)<<endl;
           for(auto i : g2)
             {
                 for(auto j : i)
                 {
                     cout<<j;
                 }
                 cout<<endl;
             }
  

    //  }

}

int32_t main()
{
     IOS
    // sieve();
     test_case 
     solve();
     return 0;
}