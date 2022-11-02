#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;
  string a, b;
  cin>>a>>b;
  ll dp[n+1][2];
  dp[0][0] = dp[0][1] = 0;

  for(ll i = 0;i<n;i++){
    ll a2b, b2a;
    if(b[i]>=a[i]){
      a2b = b[i]-a[i];
      b2a = 26-a2b;
    }
    else{
      b2a = a[i]-b[i];
      a2b = 26-b2a;
    }

    ll c11 = dp[i][0] + a2b;
    ll c12 = dp[i][1] + a2b;
    if(abs(c11)<abs(c12)){
      dp[i+1][0] = c11;
    }
    else{
      dp[i+1][0] = c12;
    }
    ll c21 = dp[i][0] + (-1*b2a);
    ll c22 = dp[i][1] + (-1*b2a);
    if(abs(c21)<abs(c22)){
      dp[i+1][1] = c21;
    }
    else{
      dp[i+1][1] = c22;
    }
    // cout<<a2b<<" "<<-1*b2a<<"\n";
    // cout<<dp[i+1][0]<<" "<<dp[i+1][1]<<"\n";
  }
  cout<<min(abs(dp[n][0]),abs(dp[n][1]))<<"\n";
  // cout<<dp[n][0] <<" "<<dp[n][1]<<"\n";
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
20:24:16 1667400856
Wednesday, 02 November 2022  
*/