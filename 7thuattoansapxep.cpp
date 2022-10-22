#include <bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n) {//O(n^2)
    for(int i=0;i<n-1;i++) {
        int minpos=i;
        for(int j=i+1;j<n;j++) {
           if(a[j]<a[minpos]) minpos=j;
        }
        int tmp=a[i];
        a[i]=a[minpos];
        a[minpos]=tmp;
    }
}

void bubblesort(int a[],int n) {//O(n^2)
     for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
     }
}

void insertionsort(int a[], int n) {//O(n^2)
     for(int i=1;i<n;i++) {
        // chen phan tu a[i] vao doan [0, i-1] sao cho thanh day tang dan
        int pos=i-1, value=a[i];
        while(pos>=0 && value <a[pos]) {
             a[pos+1]=a[pos];
             pos--;
        }
        a[pos+1]=value;
     }
}

void countingsort(int a[], int n) {//O(n+k)
    // dem xem moi gia tri xuat hien bao nhieu lan, sau do in tu be den lon
    //Dk khai bao duoc mang dem co k+1 phan tu voi k la phan tu lon nhat trong mang
    // cac phan tu trong mang khong duoc la so am
    int k=INT_MIN;
    for(int i=0;i<n;i++) {
        k=max(k,a[i]);
    }
    int cnt[k+1]={0};
    for(int i=0;i<n;i++) {
        cnt[a[i]]++;
    }
    for(int i=0;i<=k;i++) {
        for(int j=0;j<cnt[i];j++) {
            cout<<i<<" ";
        }
    }
}
// thao tac tron tu l->mid va tu mid+1->right de tao thanh day tang dan
void merge(int a[], int l, int m, int r) {
    // tam thoi luu cac phan tu tu chi so l->m vao 1 mang
    // luu cac phan tu chi so m+1->r vao 1 mang
    int n1=m-l+1, n2=r-m;
    int x[n1], y[n2];
    for(int i=0;i<n1;i++) {
        x[i]=a[l+i];
    }
    for(int i=0;i<n2;i++) {
        y[i]=a[m+i+1];
    }
    // tron 2 mang x,y roi gan lai cho mang a[l,r]
    int idx=l;
    int i=0,j=0;
    while(i<n1&&j<n2) {
        if(x[i]<=y[j]) a[idx++]=x[i++];
        else a[idx++]=y[j++];
    }
    while(i<n1) a[idx++]=x[i++];
    while(j<n2) a[idx++]=y[j++];

    
}
void mergesort(int a[], int l, int r) {//O(nlogn)
   if(l<r) {
    int m=(l+r)/2;
    mergesort(a,l,m);// goi de quy nua ben trai
    mergesort(a,m+1,r); // goi de quy nua ben phai
    merge(a,l,m,r);
   }
}

//ham phan hoach
int partition(int a[], int l, int r) {
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++) {
        //neu a[j]>pivot bo qua
        if(a[j]<=pivot) {
            // dua a[j] len dau
           i++;
           int tmp=a[i]; a[i]=a[j]; a[j]=tmp;
        }
    }
    i++;
    int tmp=a[i]; a[i]=a[r]; a[r]=tmp;
    return i;
}

void quicksort(int a[], int l, int r) {
    if(l<r) {
        int pos=partition(a,l,r);
        //xet de quy ve day ben trai 
        quicksort(a,l,pos-1);
        //xet de quy ve ben phai
        quicksort(a,pos+1,r);
    }
}
int main() {
    int n;
    cin>>n;
   int a[n];
    for(int i=0;i<n;i++) {
      cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    
    
    
    
    
}