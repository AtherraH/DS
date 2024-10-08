#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*link;
}*head=NULL,*ptr,*ptr1,*ptr2,*temp;
void insert();
void delete();
void display();
int main() {
    int x;
    while (x != 4) {
        printf("\nEnter Operation to be performed on Linked List: 1.Insert  2. Delete 3. Display  4.Exit: ");
        scanf("%d",&x);
        switch (x) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Successfully Exited");
                break;
            default:
                printf("Invalid\n");
                break;
        }
     } 
}
void insert(){
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp==NULL) printf("Overflow! \n");
	else if(head==NULL){
		printf("Enter element to be inserted:");
		scanf("%d",&temp->data);
		temp->link = head;
		head = temp;
	}
	else{
		int x;
		printf("Position to Insert element: 1-Beginning 2-End 3-Random Position:");
		scanf("%d",&x);
		if(x==1){
		 	printf("Enter element to insert:");
		 	scanf("%d",&temp->data);
		 	temp->link=head;
		 	head=temp;
		}
		 else if(x==2){
		  ptr=head;
		  while(ptr->link!=NULL)
		  	ptr=ptr->link;
		  	ptr->link=temp;
		  	printf("Enter element to insert:");
		  	scanf("%d",&temp->data);
		  	temp->link=NULL;
		 }
		 else if(x==3){
		  int key;
		  printf("Enter element after which new node is inserted:");
		  scanf("%d",&key);
		  ptr1=head;
		  ptr2=ptr1->link;
		  while(ptr2->link!=NULL&&ptr1->data!=key){
		  	ptr1=ptr2;
		  	ptr2=ptr2->link;
		   }
		 	if(ptr1->data==key){
		 		printf("Enter element to insert:");
		 		scanf("%d",&temp->data);
		 		temp->link=ptr2;
		 	 	ptr1->link=temp;
		 		}
		 	else printf("Element not found");
		 	}
		 else printf("Invalid!");
	}
}
void delete(){
	if(head==NULL) printf("Underflow!");
	else if(head->link==NULL){
	 	ptr=head;
	 	printf("Element deleted is: %d",ptr->data);
		head=NULL;
		free(ptr);
	}
  	else {
        int x;
        printf("Position to delete element: 1.Front  2.End  3.Random Position: ");
        scanf("%d",&x);
        if (x == 1) {
            ptr = head;
            printf("Deleted element is %d \n", ptr->data);
            head = ptr->link;
            free(ptr);
        }
        else if (x == 2) {
            ptr1 = head;
            ptr2 = ptr1->link;
            while (ptr2->link != NULL) {
                ptr1 = ptr2;
                ptr2 = ptr2->link;
            }
            printf("Deleted element is %d \n", ptr2->data);
            ptr1->link = NULL;
            free(ptr2);
        }
        else if (x == 3) {
            int key;
            printf("Enter the element whose node is to be deleted: ");
            scanf("%d", &key);
            ptr1 = head;
            ptr2 = ptr1->link;
            while ((ptr2->data != key) && (ptr2->link != NULL)) {
                ptr1 = ptr2;
                ptr2 = ptr2->link;
            }
            if (ptr2->data == key) {
                printf("Deleted element is %d \n", ptr2->data);
                ptr1->link = ptr2->link;
                free(ptr2);
            }
            else
                printf("Element not found in linked list! \n");
        }
        else
            printf("Invalid \n");
   	}
}
void display() {
    if (head == NULL) printf("Empty List! \n");
    else {
        printf("Linked list is: \n");
        ptr = head;
        while (ptr != NULL) {
            printf("%d \t",ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
	} 
}
