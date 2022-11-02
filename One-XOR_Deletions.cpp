#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  map<ll,ll> m;
  for(ll i = 0;i<n;i++){
    cin>>arr[i];
    m[arr[i]]++;
  }

  ll ans = INT_MAX;
  for(ll i = 0;i<=n;i++){
    ll temp;
    if((i^(i+1)) <=1){
      temp = n - m[i]-m[i+1];
    }
    else{
      temp = n-m[i];
    }
    ans = min(ans, temp);
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
20:03:34 1667399614
Wednesday, 02 November 2022  
*/