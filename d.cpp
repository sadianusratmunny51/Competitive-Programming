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
int fact(int n){if(n==1) return 1;   return (n*(fact(n-1)));}
int gcd(int a, int b){ if(b==0) return a; return gcd(b, a%b);}
int lcm(int a, int b){ return (a*b)/gcd(a,b); }

bool checkPrime(int n){
  int cnt=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      cnt++;
      if((n/i)!=i)
      cnt++;
    }
  }
  if(cnt==2) return true;
  else return false;
}
  

  /*   string things  
  int num = stoi(str);
  string str = to_string(num) 
  char letter = 'a' + (number - 1); 1 based indexing
   int num=abs((a[i+1]-'a'+1)-(a[i]-'a'+1));

        add minimum to make Plindrome 
         string rev=str;
        reverse(rev.begin(),rev.end());
        int n=str.n();
        str+='$';
        str+=rev;
        //vi cal; int forward = (z - x + 26) % 26;
   // int backward = (x - z + 26) % 26; 
 vector<string> subs;
     for(int i =0; i<(int)s.n();i++){
        for(int l=1;l<=(int)s.n()-i;l++){
            subs.pb(s.substr(i, l));
        }
    }
   
            
  */
// int power=(1LL<<(n/2)) this works as power


                //---------------------------Code------------------------//
 int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

bool isValid(int x, int y){
    return x>=0 && x<3 && y>=0 && y<3;
}

//  for(int i=0;i<n;i++)
int32_t main() {
    start();
   
  int T=1;
  cin>>T;
  while(T--){
    //basic;bool f=false;
    int n,p; cin>>n>>p;
   vi a(n),b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   vector<pair<int,int>>v(n);
   for(int i=0;i<n;i++){
    v[i].first=b[i];
    v[i].second=a[i];
   }
   sort(v.begin(), v.end(), [](pair<int,int> &p1, pair<int,int> &p2) {
        // Ascending by first (b), descending by second (a)
        if (p1.first == p2.first)
            return p1.second > p2.second;
        return p1.first < p2.first;
    });

    // Display the sorted pairs
    for (auto &p : v) {
        cout << p.first << " " << p.second << endl;
    }
  }
  
  
    return 0;

}