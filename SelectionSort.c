#include <stdio.h>
#include <time.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int arr[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        swap(&arr[min_idx],&arr[i]);
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
    SelectionSort(arr,n);
    end=clock();
    time=((double)(end-start))/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\ntime taken is %.6f seconds",time);
    return 0;
}