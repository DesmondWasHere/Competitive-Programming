#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  ll sum = 0;
  for(ll i =0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  if(sum%2!=0){
    cout<<"-1\n";
    return;
  }

  vector<ll> loc;
  for(ll i = 0;i<n;i++){
    if(arr[i] != 0){
      loc.push_back(i);
    }
  }
  if(loc.size() == 0){
    cout<<"1\n";
    cout<<1<<" "<<n<<"\n";
    return;
  }
  vector<pair<ll,ll>> ans;
  if(loc[0] != 0){
    ans.push_back({1, loc[0]});
  }
  for(ll i = 0;i<loc.size();i+=2){
    ll left = loc[i];
    ll right = loc[i+1];
    if(arr[left] == arr[right]){
      if((right-left)%2 == 0){
        ans.push_back({left+1, left+1});
        ans.push_back({left+2, right+1});
      }
      else{
        ans.push_back({left+1, right+1});
      }
    }
    else{
      ans.push_back({left+1,right});
      ans.push_back({right+1, right+1});
    }
    if(i+2 == loc.size()){
      if(loc[i+1] != n-1){
        ans.push_back({loc[i+1]+2, n});
      }
    }
    else{
      if(loc[i+2]-loc[i+1] != 1){
        ans.push_back({loc[i+1]+2, loc[i+2]});
      }
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
22:22:23 1666630343
Monday, 24 October 2022  
*/