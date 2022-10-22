#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main() {
   int n;
   cin>>n;
   set<ll> se;
   for(int i=0;i<n;i++) {
    ll x; cin>>x;
    se.insert(x);
   }
   cout<<se.size();
   
    return 0;
    
}