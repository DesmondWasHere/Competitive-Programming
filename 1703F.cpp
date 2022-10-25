#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i = 0;i<n;i++){
    cin>>arr[i];
  }
  ll prefix[n+1];
  prefix[0] = 0;
  for(ll i = 0;i<n;i++){
    prefix[i+1] = prefix[i];
    if(arr[i]<i+1){
      prefix[i+1]++;
    }
  }

  ll ans = 0;
  for(ll i = 0;i<n;i++){
    if(arr[i]<i+1){
      if(arr[i]-1>=0)
        ans+=prefix[arr[i]-1];
    }
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
16:40:05 1666696205
Tuesday, 25 October 2022  
*/