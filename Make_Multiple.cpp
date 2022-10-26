#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
    ll a, b;
    cin>>a>>b;
    if(b%a==0){
      cout<<"YES\n";
      return;
    }
    ll diff = b-a;
    if(diff == 0){
      cout<<"YES\n";
      return;
    }
    if(diff == 1){
      cout<<"NO\n";
      return;
    }

    if(diff>=a)
      cout<<"YES\n";
    else
      cout<<"NO\n";
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
20:09:51 1666795191
Wednesday, 26 October 2022  
*/