#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool binarysearch(int a[], int n, int x) {
    int l=0,r=n-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==x) return true;
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return false;
}

int firstPos(int a[],int n, int x) {
    int res=-1,l=0,r=n-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==x) {
            res=m;
            r=m-1;
        }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return res;
}

int lastPos(int a[],int n, int x) {
    int res=-1,l=0,r=n-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==x) {
            res=m;
            l=m+1;
        }
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return res;
}
int lower(int a[],int n, int x) {
    int res=-1,l=0,r=n-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]>=x) {
            res=m;
            r=m-1;
        }
        else l=m+1;
    }
    return res;
}
int upper(int a[],int n, int x) {//cuoi cung nho hon bang x
    int res=-1,l=0,r=n-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]<=x) {
            res=m;
            l=m+1;
        }
        else r=m-1;
    }
    return res;
}

int main() {
   int n,x;
   cin>>n>>x;
   int a[n];
   for(int i=0;i<n;i++) {
    cin>>a[i];
   }
   cout<<binarysearch(a,n,x);
    return 0;
    
}