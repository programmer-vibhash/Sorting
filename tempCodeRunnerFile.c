#include <stdio.h>
#include <time.h>

void InsertionSort(int arr[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    InsertionSort(arr,n);
    end=clock();
    time=((double)(end-start))/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\ntime taken is %.6f seconds",time);
    return 0;
}