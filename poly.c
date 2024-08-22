#include <stdio.h>
void main()
{
	int n;
	struct polynomial{
		int coeff;
		int expo;
	} poly[10];
	printf("Enter no. of terms in the polynomial:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the coefficient of term %d :",i+1);
		scanf("%d",&poly[i].coeff);
		printf("Enter exponent of term %d:",i+1);
		scanf("%d",&poly[i].expo);
	}
	printf("The Polynomial Expression is: \n");
	for(int i=0;i<n;i++){
		printf("(%dx^%d)", poly[i].coeff,poly[i].expo);
		if(i!=n-1){
		printf(" + ");
	}
	}
}
