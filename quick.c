#include <stdio.h>
void swap(int a, int b,int A[]) {
    int t= A[a];
    A[a] = A[b];
    A[b] = t;
}
int part(int a[], int low, int high) {
    int pivot = a[low];
    int i = low;
    int j = high;
    while(i<j){
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            swap(i,j,a);
        }
    }
    swap(low,j,a);
    return (j);
}
void quick(int A[], int low, int high) {
    if (low < high) {
        int pivot = part(A, low, high);
        quick(A, low, pivot - 1);
        quick(A, pivot + 1, high);
    }
}
int main() {
    int x;
    printf("Enter number of elements: ");
    scanf("%d",&x);
    int A[x];
    printf("Enter your elements: ");
    for (int i = 0; i < x; i++) {
        scanf("%d", &A[i]);
    }
    printf("Original array: \n");
    for (int i = 0; i < x; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    quick(A,0,x-1);
    printf("Sorted array: \n");
    for (int i = 0; i < x; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}


