#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second<b.second;
}

int main() {
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n,cmp);
    int res=1;
    int tmp=a[0].second;
    for(int i=1;i<n;i++) {
        if(a[i].first>tmp) {
            res++;
            tmp=a[i].second;
        }
    }
    cout<<res;
    
    
    
    
}