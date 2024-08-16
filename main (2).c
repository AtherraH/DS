/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int n,x,flag=0,left=0,right=n-1,mid,A[100],time=0;
    time=time+4;
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
    while(left<=right){
        time++;
        mid=(left+right)/2;
        time++;
        if(x==A[mid]){
            time++;
            flag=1;
            time++;
        }
        else if(x>A[mid]){
            time++;
            left=mid+1;
            time++;
        }
        else if(x<A[mid]){
            time++;
            right=mid-1;
            time++;
        }
    }
    time++;
    if(flag==0){
        time++;
        printf("Element not found \n");
        time++;
    }
    else {
        time++;
        printf("Element found \n");
        time++;
    }
    printf("Space complexity=%d \n", (7*4+n*4));
    time++;
    time++;
    printf("Time complexity=%d \n", time+1);

}

