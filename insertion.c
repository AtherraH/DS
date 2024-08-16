#include <stdio.h>

int main()
{
    int i=1,j,n,temp,a[50],t=0;
    t=t+2;
    printf("Enter no. of elements in array:");
    t++;
    scanf("%d",&n);
    t++;
    printf("Enter elements of array:");
    t++;
    for(int x=0;x<n;x++){
        t++;
        scanf("%d",&a[x]);
        t++;
    }
    t++;
    while(i<n){
        t++;
        temp=a[i];
        t++;
        j=i-1;
        t++;
        while(j>=0&&temp<a[j]){
            t++;
            a[j+1]=a[j];
            t++;
            j--;
        }
        t++;
        a[j+1]=temp;
        t++;
        i++;
    }
    t++;
    printf("The sorted array is: \n");
    t++;
    for(int x=0;x<n;x++){
        t++;
        printf("%d ",a[x]);
        t++;
    }
    t++;
    printf("\nSpace complexity =%d \n",(6*4+n*4));
    t++;
    t++;
    printf("Time complexity = %d",t);
}
