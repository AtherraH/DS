#include <stdio.h>
int main()
{
    int i=1,j,n,temp,a[50];
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(int x=0;x<n;x++){
        scanf("%d",&a[x]);
    } 
    while(i<n){
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        i++;
    }
    printf("The sorted array is: \n");
    for(int x=0;x<n;x++){
        printf("%d ",a[x]);
    }
}
