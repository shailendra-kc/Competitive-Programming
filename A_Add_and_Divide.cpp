#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
//dp se soch shailendra 
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
   if(a==b){
       cout<<2<<endl;
   }
   else if(a<b){
     cout<<1<<endl;
   }
   else{
       int ans=INT_MAX;
       int c=0;
       if(b==1){
           b=b+1;
           c++;
       }

 for(int i=b;i<b+100;i++){
    int cnt=0;
    cnt+=i-b;
     int A=a;
    while(A !=0){
        if(A==i){
         A=0;
        cnt+=2;
        }
        else{
        A=A/i;
        cnt++;
        }
    }
     ans=min(ans,cnt+c);
     

    }
    cout<<ans<<endl;

   }
   

      
    }   
return 0;

}