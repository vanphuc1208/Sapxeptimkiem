#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<ll,ll> a, pair<ll,ll> b ) {
    return a.second<b.second;
}

int main() {
  int n;
  cin>>n;
  pair<ll,ll> a[n];
  for(int i=0;i<n;i++) {
    cin>>a[i].first>>a[i].second;
  }
  sort(a,a+n,cmp);
  int res=1;
  ll tmp=a[0].second;
  for(int i=1;i<n;i++) {
    if(a[i].first>=tmp) {
        res++;
        tmp=a[i].second;
    }
  }
  cout<<res;

    return 0;
    
}