#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i = 0 ;i<n;i++){
    cin>>arr[i];
  }
  if(n%2!=0){
    cout<<"-1\n";
    return;
  }

  vector<pair<ll,ll>> ans;
  for(ll i= 0;i<n;i+=2){
    if(arr[i] == arr[i+1]){
      ans.push_back({i+1, i+2});
    }
    else{
      ans.push_back({i+1, i+1});
      ans.push_back({i+2, i+2});
    }
  }
  cout<<ans.size()<<"\n";
  for(auto i:ans){
    cout<<i.first<<" "<<i.second<<"\n";
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
12:38:43 1666595323
Monday, 24 October 2022  
*/