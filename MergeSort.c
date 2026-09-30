#include <stdio.h>
#include <time.h>

void Merge(int a[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    int temp[50];
    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(j=0;j<n2;j++)
        R[j]=a[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]) temp[k++]=L[i++];
        else temp[k++]=R[j++];
    }
    while(i<n1){
        temp[k++]=L[i++];
    }
    while(j<n2){
        temp[k++]=R[j++];
    }
    for(i=l;i<=r;i++) a[i]=temp[i];
}

void MergeSort(int arr[],int l,int r){
    int mid;
    if(l<r){
        mid=(l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
    else{
        return;
    }
}

int main(){
    int n;
    clock_t start,end;
    double time;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    start=clock();
    MergeSort(arr,0,n-1);
    end=clock();
    time=((double)(end-start))/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\ntime taken is %f",time);
    return 0;
}