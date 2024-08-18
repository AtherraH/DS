#include <stdio.h>
void main()
{
 	int i,j,n,small,a[50],temp,t=0;
        t++;
        printf("Enter no of elements: ");
        t++;
        scanf("%d",&n);
        t++;
        printf("Enter elements of array: ");
        t++;
        for(int i=0;i<n;i++){
       	 t++;
       	 scanf("%d",&a[i]);
       	 t++;
        }
        t++;
        i=0;
        t++;
        while(i<n){
            t++;
            j=i+1;
        	t++;
        	small=i;
        	t++;
        	while(j<n)
        	{
        	  t++;
        	  if (a[small]>a[j]){
        	    t++;
        	    small=j;
        	    t++;
        	  }
        	  j++;
        	  t++;
        	}
        	t++;
        	if (i!=small){
        	    t++;
        		temp=a[i];
        		t++;
        		a[i]=a[small];
        		t++;
        		a[small]=temp;
        		t++;
        	}
        	i++;
        	t++;
        }
        printf("Sorted array is: ");
        t++;
        for(i=0;i<n;i++){
            t++;
        	printf("%d \t",a[i]);
        	t++;
        }
        t++;
        printf("\nSpace complexity =%d \n",(6*4+4*n));
        t++;
        printf("Time complexity = %d",t);

 }
