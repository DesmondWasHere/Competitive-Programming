#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n, k;
  cin>>n>>k;
  ll arr[n];
  ll sum = 0;
  for(ll i = 0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  while(k--){
    ll l, r;
    cin>>l>>r;
    if(l == r)
      sum++;
    else{
      if((r-l)%2==0){
        sum++;
      }
      else{

      }
    }
  }
  cout<<sum<<"\n";
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
20:01:28 1666794688
Wednesday, 26 October 2022  
*/