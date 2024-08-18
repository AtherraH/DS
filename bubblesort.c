#include <stdio.h>
int main()
{   int a[50],n,i,j,temp,t;
    printf("Enter no. of elements of array:");
    t++;
    scanf("%d",&n);
    t++;
    printf("Enter elements of array:");
    t++;
    for(i=0;i<n;i++){
        t++;
        scanf("%d",&a[i]);
        t++;
    }
    t++;
    for(i=0;i<n-1;i++){
        t++;
        for(j=0;j<n-i-1;j++){
            t++;
            if(a[j]>a[j+1]){
                t++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                t++;
                t++;
                t++;
            }
        }t++;
    }
    t++;
    printf("Sorted array is: ");
    t++;
    for(i=0;i<n;i++){
        t++;
        t++;
        printf("%d \t",a[i]);
    }
    t++;
    printf("\nSpace complexity =%d \n",(5*4+n*4));
    t++;
    t++;
    printf("Time complexity = %d",t);
}
