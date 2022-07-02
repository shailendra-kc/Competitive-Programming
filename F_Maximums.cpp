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
/*
int N=1000001;
vector<bool>isprime(N,true);
vector<int> prime;
void sieve(){
    isprime[0]=false;
    isprime[1]=false;
    for (int p = 2; p * p <= N; p++)
    {
        if (isprime[p])
        {
            for (int i = p * p; i <= N; i += p)
                isprime[i] = false;
        }
    }
    loop(i,2,N+1){
    if(isprime[i])
      prime.push_back(i);
    }         
}

 /*   // /
// SPARSE TABLE CODE     
const int k=25;
const int N = 1e5; 
int table[N][k + 1]; 
void buildSparseTable(vector<int> v) 
{    int n=v.size();
    for (int i = 0; i < n; i++) 
        table[i][0] = v[i]; 
  
    for (int j = 1; j <= k; j++) 
        for (int i = 0; i <= n - (1 << j); i++) 
            table[i][j] = table[i][j - 1] + 
               table[i + (1 << (j - 1))][j - 1]; 
} 
 // SPARSETABLE RANGE SUM QUERY 
int querysum(int L, int R) 
{ 
    int answer = 0; 
    for (int j = k; j >= 0; j--) { 
        if (L + (1 << j) - 1 <= R) { 
            answer = answer + table[L][j]; 
            L += 1 << j; 
        } 
    } 
    return answer; 
}   
int query(int L,int R){
 int j = log2(R - L + 1);
int answer = min(table[L][j] ,table[R - (1 << j) + 1][j]); 
return answer;  
}   
      */  
void solve(){
   int n;
   cin>>n;
   vll v(n);
   loop(i,0,n)
       cin>>v[i];
     
    int x=0;
   loop(i,0,n){
    int a=v[i]+x;
    cout<<a<<" ";
    x=max(x,a);
   }


    cout<<endl;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
    // ll t=1;
    // cin>>t;
    // //sieve();
    // while(t--)
      solve();
     return 0;
}//