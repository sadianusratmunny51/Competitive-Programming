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
//#define end cout<<ans<<endl
void start() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
int fact(int n){
  if(n==1) return 1; 
   return (n*(fact(n-1)));

}
int gcd(int a, int b){
  if(b==0) return a;
  return gcd(b, a%b);
}
int lcm(int a, int b){
   return (a*b)/gcd(a,b);
  }

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
                         /* Sieve Function */
int N=1000000;
bool sieve[1000000+1];
vi kth;

void createSieve(){

   memset(sieve, true, sizeof(sieve));
   sieve[0] = sieve[1] = false;

  for(int i=2;i*i<=N;i++){
    if(sieve[i]==true){
      for(int j=i*i;j<=N;j+=i){
        sieve[j]=false;
      }

    }
  }
   
 /*  for(int i=2;i<=N;i++){
    if(sieve[i]==true) kth.pb(i);
   }


  int limit=5*1000000,cnt=0,size=1;
  for(int i=2; ; i++){
    if(sieve[i]==true) cnt++;
    if(cnt==limit){
      size=i;
      break;
    } 
  }
  cout<<size<<endl; */

}  
int lps(string s){
  vi lps(s.size(),0);
  int pre=0,suf=1,n=s.size();
  while(suf<n){
    if(s[pre]==s[suf]){
      lps[suf]=pre+1;
      suf++;pre++;
    }
    else{
      if(pre==0){
        lps[suf]=0;
        suf++;
      }
      else{
        pre=lps[pre-1];
      }
    }

  }
  return lps[n-1];
}
  /*   string things  
  int num = stoi(str); 
  char letter = 'a' + (number - 1); 1 based indexing
   int num=abs((a[i+1]-'a'+1)-(a[i]-'a'+1));
        add minimum to make Plindrome 
         string rev=str;
        reverse(rev.begin(),rev.end());
        int size=str.size();
        str+='$';
        str+=rev;

   
            
  */
// int power=(1LL<<(n/2)) this works as power


                //---------------------------Code------------------------//
   //vi cal; 
   void lpsfind(vector<int>&lps,string s){
 //vi lps(s.size(),0);
  int pre=0,suf=1,n=s.size();
  while(suf<n){
    if(s[pre]==s[suf]){
      lps[suf]=pre+1;
      suf++;pre++;
    }
    else{
      if(pre==0){
        lps[suf]=0;
        suf++;
      }
      else{
        pre=lps[pre-1];
      }
    }

  }
  
}
int strStr(string haystack, string needle) {
         vector<int > lps(needle.size(),0);
    lpsfind(lps,needle);
    int first=0,second=0;
    while(first<(int)haystack.size() and second<(int)needle.size()){
        if(haystack[first]==needle[second]){
            first++;second++;

        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
    if(second==(int)needle.size()){
        return first;
    }
    return -1;
    
    }
  

//  for(int i=0;i<n;i++)
int32_t main() {
    start();
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    // Splitting a into s1 and s2
    string s1, s2;
    bool wildcardFound = false;

    for (char c : a) {
        if (c == '*') {
            wildcardFound = true;
            continue;
        }
        if (!wildcardFound) s1 += c;
        else s2 += c;
    }

    // Check if both s1 and s2 can match b
    bool isMatch = false;

    // Case 1: If `a` is just `*`, then it's a match for any `b`
    if (s1.empty() && s2.empty()) {
        isMatch = true;
    }
    // Case 2: Check if `b` starts with `s1` and ends with `s2`
    else if (b.size() >= s1.size() + s2.size()) {
        if (b.substr(0, s1.size()) == s1 && b.substr(b.size() - s2.size()) == s2) {
            isMatch = true;
        }
    }

    // Output result
    if (isMatch) yes;
    else no;

//   }


    return 0;

}