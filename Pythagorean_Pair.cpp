#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
  ll n;
  cin>>n;

  ll count = 1;
  while(n%4==0){
    n = n/4;
    count*=2;
  }
  // cout<<n<<" ";
  for(ll i = 0;i*i<=n;i++){
    ll a2 = pow(i,2);
    ll diff = n - a2;
    if(diff<0){
      break;
    }
    ll square = sqrt(diff);
    if(square*square == diff){
      cout<<count*i<<" "<<count*square<<"\n";
      return;
    }
  }
  cout<<"-1\n";
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
20:38:58 1666796938
Wednesday, 26 October 2022  
*/