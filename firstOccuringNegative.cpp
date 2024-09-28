#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define Block 1000
#define  nl cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi  vector<int>
#define basic int n;cin>>n; vi a(n); for(int i=0;i<n;i++)cin>>a[i]
#define PI    3.141592653589793238;
#define INF   LONG_LONG_MAX;
#define MOD   1e9+7;
#define show cout<<ans<<endl
void start() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
int32_t main() {
    start();
    int T =1; 
   // cin>>T;
    while(T--){
         basic; int k; cin>>k;
         vi b, ans;
         queue<int>q;
         for(int i=0;i<k;i++){
          if(a[i]<0)q.push(a[i]);

         }
         if(q.empty()){
            ans.pb(0);
            
          }
          else
          ans.pb(q.front());
         for(int i=1,j=k;i<n-k+1;j++,i++){
          if(a[j]<0)q.push(a[j]);
          if(q.empty()){
            ans.pb(0);
            continue;
          }
          if(a[i-1]==q.front())q.pop();
          if(q.empty()){
            ans.pb(0);
           
          }
          else
          ans.pb(q.front());
                
         }
         for(auto i: ans) cout<<i<<" ";nl;



    }
 return 0;  
}