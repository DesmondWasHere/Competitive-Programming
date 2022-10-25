#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n, k;
  cin>>n>>k;
  ll arr[n];
  for(ll i = 0;i<n;i++){
    cin>>arr[i];
  }
  vector<ll> ans;
  ans.push_back(0);
  for(ll i = 1;i<n;i++){
    if(arr[i]*2 > arr[i-1]){

    }
    else{
      ans.push_back(i);
    }
  }
  ans.push_back(n);
  // for(auto i:ans){
  //   cout<<i<<" ";
  // }
  // cout<<"\n";
  ll sum = 0;
  for(ll i =1;i<ans.size();i++){
    // cout<<ans[i]-k<<"->";
    sum+=max(ans[i]-ans[i-1]-k, 0ll);
  }
  // cout<<"\n";
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
17:06:24 1666697784
Tuesday, 25 October 2022  
*/