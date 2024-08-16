#include <stdio.h>

int main()
{ int n,i,x,count=0,A[100],time=0;
    time=time+2;
    printf("Enter no. of elements in array:");
    time++;
    scanf("%d",&n);
    time++;
    printf("Enter elements of array:");
    time++;
    for(int i=0;i<n;i++){
        time++;
        scanf("%d",&A[i]);
        time++;
    }
    time++;
    printf("Enter element to be found:");
    time++;
    scanf("%d",&x);
    time++;
    for(i=0;i<n;i++){
        time++;
        if(A[i]==x){
            count++;
            time++;
            printf("Element found at %d position \n",i+1);
            time++;
        }
    }
    time++;
    if(count>0){
        time++;
        printf("Item is found %d times\n",count);
        time++;
    }
    else {
        printf("Item not found");
        time++;
        time++;}
    printf("Space complexity=%d \n", (5*4+n*4));
    time++;
    time++;
    printf("Time complexity=%d \n", time+1);

}
