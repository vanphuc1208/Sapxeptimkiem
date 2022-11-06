#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
int n,x;
cin>>n>>x;
map<ll,ll> mp;
ll sum=0;
ll res=0;
mp[0]=1;
for(int i=0;i<n;i++) {
  ll a;
  cin>>a;
  sum+=a;
  res+=mp[sum-x];
  mp[sum]++;
}
cout<<res;
return 0;
}




    