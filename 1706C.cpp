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
  if(n%2==0){
    vector<ll> odd;
    vector<ll> even;
    ll temp1 = 0;
    ll temp2 = 0;
    odd.push_back(0);
    even.push_back(0);
    for(ll i = 1;i<n-1;i++){
      if(i%2 == 0){
        ll temp11=(max(arr[i-1],arr[i+1])-arr[i]+1);
        temp1+=max(0ll, temp11);
        even.push_back(temp1);
      }
      else{
        ll temp22=(max(arr[i-1],arr[i+1])-arr[i]+1);
        temp2+=max(0ll, temp22);
        odd.push_back(temp2);
      }
    }
    ll ans = LLONG_MAX;
    // for(auto i:odd){
    //   cout<<i<<" ";
    // }
    // cout<<"\n";
    // for(auto i:even){
    //   cout<<i<<" ";
    // }
    // cout<<"\n";

    for(ll i = 1;i<n;i+=2){
      ll left = i-1;
      ll right = i;
      ll rightsum = even[n/2 -1]-even[i/2];
      ll leftsum = odd[(i-1)/2];
      ans = min(ans, rightsum+leftsum);
      // cout<<rightsum<<"\n";
    }
    cout<<ans<<"\n";
  }
  else{
    ll ans = 0;
    for(ll i = 1;i<n;i+=2){
      ll ans1 =(max(arr[i-1],arr[i+1])-arr[i]+1);
      ans+=max(0ll, ans1);
    }
    cout<<ans<<"\n";
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
16:05:47 1666694147
Tuesday, 25 October 2022  
*/