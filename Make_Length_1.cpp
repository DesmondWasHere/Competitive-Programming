#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;

  // if(s[i] == '1'){
  //   cout<<"YES\n";
  //   return;
  // }
  ll last = 1;
  for(ll i = 1;i<n;i++){
    if(s[i] == s[i-1]){
      last++;
    }
    else{
      if(s[i-1] == '1' and last%2!=0){
        cout<<"NO\n";
        return;
      }
      last = 1;
    }
  }
  if(s[n-1] == '1' and last%2!=0){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
  }
}

int main()
{
    fastio();
    /* Test cases Handling*/
    long long test = 1; 
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
/*
20:11:07 1667400067
Wednesday, 02 November 2022  
*/