#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
int n;
cin>>n;
ll a[n];
ll sum=1;
for(int i=0;i<n;i++) {
  cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++) {
  if(a[i]>sum) break;
  sum+=a[i];
}
cout<<sum;
return 0;
}




    