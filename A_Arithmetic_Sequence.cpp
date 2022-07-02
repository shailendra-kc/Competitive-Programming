#include<bits/stdc++.h>
#define mod 1000000007
#define dig floor(log10(n) + 1) 
typedef long long ll;
//dp se soch shailendra 
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;

    ll d1=b-a;
    ll d2=c-b;
if(d1>=d2)
   cout<<(d1-d2)<<endl;
else{

int k=(d2+1-d1)/2;
 cout<<(d1-d2+3*k)<<endl;

}   


     
return 0;
}