#include <stdio.h>
#include <stdlib.h>
struct node
{ int coeff;
  int exp;
  struct node* link;
}*P,*Q,*R;
struct node* create(int coeff, int exp) {
  struct node* new = (struct node*)malloc(sizeof(struct node));
  new->coeff = coeff;
  new->exp = exp;
  new->link = NULL;
  return new;
 }
void insert(struct node* *poly, int coeff, int exp){
  struct node* new = create(coeff, exp);
  if (*poly == NULL) *poly = new;
  else{
    struct node* temp = *poly;
    while (temp->link!= NULL){
      temp = temp->link;
   }
   temp->link = new;
 }
}
void display(struct node* poly){
  while (poly != NULL){
   printf("%dx^%d", poly->coeff, poly->exp);
   if (poly->link!= NULL && poly->link->coeff >= 0) printf(" + ");
   poly = poly->link;
 }
 printf("\n");
}
struct node* add(struct node* poly1, struct node* poly2){
  struct node* result = NULL;
  while (poly1 != NULL && poly2 != NULL){
    if (poly1->exp > poly2->exp){
      insert(&result, poly1->coeff, poly1->exp);
      poly1 = poly1->link;
  	}
    else if (poly1->exp < poly2->exp){	
      insert(&result, poly2->coeff, poly2->exp);
      poly2 = poly2->link;
    }
    else{
     int sumCoeff = poly1->coeff + poly2->coeff;
     if (sumCoeff != 0) insert(&result, sumCoeff, poly1->exp);
     poly1 = poly1->link;
     poly2 = poly2->link;
 }
}
while (poly1 != NULL){
   insert(&result, poly1->coeff, poly1->exp);
   poly1 = poly1->link;
 }
while (poly2 != NULL){
  insert(&result, poly2->coeff, poly2->exp);
  poly2 = poly2->link;
 }
return result;
}
int main(){
  struct node* P = NULL;
  struct node* Q = NULL;
  struct node* R = NULL;
  int n, coeff, exp;
  printf("Enter the number of terms in the first polynomial: ");
  scanf("%d", &n);
 for (int i = 0; i < n; i++){
  printf("Enter coefficient and exponent of %dth term:\n",i+1);
  scanf("%d %d",&coeff,&exp);
  insert(&P, coeff, exp);
 }
 printf("Enter the number of terms in the second polynomial:");
 scanf("%d", &n);
for (int i = 0; i < n; i++){ 
  printf("Enter coefficient and exponent of %dth term:\n",i+1);
  scanf("%d %d", &coeff, &exp);
  insert(&Q, coeff, exp);
 }
  printf("\nFirst Polynomial: ");
  display(P);
  printf("Second Polynomial: ");
  display(Q);
  R=add(P,Q);
  printf("Sum is: ");
  display(R);
  }
