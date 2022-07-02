#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
//dp se soch shailendra 
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     int  t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int > v1(n);
       vector<int> v2(n);
       for(int i=0;i<n;i++){
            cin>>v1[i];
       }  
       for(int i=0;i<n;i++){
          cin>>v2[i]; 
       }
       vector<int> vi;
       vector<int> vj;
       for(int i=0;i<n;i++){
           int a=v1[i]-v2[i];
           if(a>0){
               for(int j=0;j<a;j++)
                 vi.push_back(i+1);
           }
           if(a<0){
              for(int j=0;j<abs(a);j++)
               vj.push_back(i+1); 
           }
       }
      
      if(accumulate(begin(v1),end(v1),0)!=accumulate(begin(v2),end(v2),0)){
          cout<<"-1\n";
      }
      else{
          cout<<vi.size()<<endl;

          for(int i=0;i<vi.size();i++){
              cout<<vi[i]<<" "<<vj[i]<<endl;
          }
      }




       
    }
return 0;
}