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
  ll ans = 0;
  for(ll i =1;i<n;i++){
    if(s[i-1] == '1' and s[i] == '0')
      ans++;
  }

  cout<<ans<<"\n";
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
20:31:42 1666796502
Wednesday, 26 October 2022  
*/