#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main() {
   int n;
   ll l;
   cin>>n>>l;
   ll a[n];
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   sort(a,a+n);
   ll tmp=0;
   for(int i=1;i<n;i++) {
    tmp=max(a[i]-a[i-1],tmp);
   }
   if(a[n-1]!=l) {
    tmp=max(tmp,l-a[n-1]);
    cout<<fixed<<setprecision(10)<<(double)tmp;
    return 0;
   }
   cout<<fixed<<setprecision(10)<<(double)tmp/2;
   
    return 0;
    
}