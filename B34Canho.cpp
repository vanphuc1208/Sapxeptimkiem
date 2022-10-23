#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main() {
   int n,m;
   cin>>n>>m;
   ll k; cin>>k;
   ll a[n],b[m];
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   for(int i=0;i<m;i++) {
    cin>>b[i];
   }
   sort(a,a+n);
   sort(b,b+m);
   int i=0,j=0;
   int res=0;
   while(i<n&&j<m) {
    if(abs(a[i]-b[j])<=k) {
       res++;
       i++;
       j++;
    }
    else if(a[i]-b[j]>k) {
        j++;
    }
    else {
        i++;
    }
   }
   cout<<res;

    return 0;
    
}