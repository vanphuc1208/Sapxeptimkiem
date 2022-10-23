#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main() {
   int n;
   ll x;
   cin>>n>>x;
   ll a[n];
   for(int i=0;i<n;i++) {
      cin>>a[i];
   }
   sort(a,a+n,greater<ll>());
   int l=0,r=n-1;
   int res=0;
   while(l<=r) {
    if(a[l]+a[r]<=x) {
      res++;
      l++;
      r--;
    }
    else {
        res++;
        l++;
    }
   } 
   cout<<res;
    return 0;
    
}