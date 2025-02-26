#include<stdio.h>
#include<stdlib.h>
struct node {
    int coeff;
    int expo;
    struct node *link;
} *poly1 = NULL, *poly2 = NULL, *psum = NULL, *ptr, *temp;

void insertterm (struct node *p, int coefficient, int exponent) {
temp = (struct node *) malloc (sizeof(struct node));
if (p == NULL) {
p = temp;
temp->coeff = coefficient;
temp->expo = exponent;
temp->link = NULL;
}
else {
ptr = p;
    while (ptr->link != NULL)
        ptr = ptr->link;
    ptr->link = temp;
temp->coeff = coefficient;
temp->expo = exponent;
temp->link = NULL;
} }

void display (struct node *p) {
    ptr = p;
    while (ptr != NULL) {        
        if (ptr->expo != 0) {
printf("(%dx^%d) + ", ptr->coeff, ptr->expo);
}
   else
printf("(%d)", ptr->coeff);
ptr = ptr->link;
} }

void computesum (struct node *p1, struct node *p2) {
if (p1->expo < p2->expo)
insertterm(psum, p2->coeff, p2->expo);
else if (p1->expo == p2->expo)
insertterm(psum, (p1->coeff + p2->coeff), p1->expo);
else
insertterm(psum, p1->coeff, p1->expo);
}

void main() {
    int i,n1,n2,coefficient,exponent;
    printf("Enter First Polynomial -");
    printf("\nEnter number of terms: ");
    scanf("%d",&n1);
    for (i=0; i<n1; i++) {
        printf("Enter coefficient and exponent for term %d: ",i+1);
        scanf("%d %d", &coefficient, &exponent);
        insertterm(poly1, coefficient, exponent);
    }
    printf("Enter Second Polynomial -");
    printf("\nEnter number of terms: ");
    scanf("%d",&n2);
    for (i=0; i<n2; i++) {
        printf("Enter coefficient and exponent for term %d: ",i+1);
        scanf("%d %d", &coefficient, &exponent);
        insertterm(poly2, coefficient, exponent);
    }
    printf("\nFirst Polynomial: ");
    display(poly1);
    printf("\nSecond Polynomial: ");
    display(poly2);
    computesum(poly1,poly2);
    printf("\nSum of the two Polynomials: ");
    display(psum);
}
