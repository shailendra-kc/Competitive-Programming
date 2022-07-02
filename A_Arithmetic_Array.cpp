typedef long long ll;
#include<bits/stdc++.h>
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
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
     ll sum =accumulate(begin(v),end(v),0LL);
     if(sum<n or sum<=0)
        cout<<1;
        else{
         cout<<(sum-n);
        }
     
      cout<<endl;

     }
return 0;
}