#include <stdio.h>
int main(){
	int n,x;
	printf("Enter number of elements in Binary tree: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter your elements: ");
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("The Binary Tree is: ");
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	printf("\nEnter the position:");
	scanf("%d",&x);
	if(x==0) printf("No element at position 0");
	else{
		if((x/2)==0) printf("No Parent node\n");
		else printf("Parent node of %d is %d\n",a[x],a[x/2]);
		if((x*2)>n) printf("No Left child\n");
		else printf("Left child of %d is %d\n",a[x],a[x*2]);
		if((x*2+1)>n) printf("No Right child\n");
		else printf("Right child of %d is %d\n",a[x],a[x*2+1]);
	}
}
