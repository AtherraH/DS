#include <stdio.h>
void enqueue();
void dequeue();
void display();
int A[50],front=-1,rear=-1,size,i,count=0;
int main()
{    int choice=0;
     printf("Enter the size of circular queue: ");
     scanf("%d",&size);   
     while(choice!=4){
     	printf("Enter Operation to perform on Circular Queue: 1. Enqueue 2. Dequeue 3. Display 4. Exit \n");
     	scanf("%d",&choice);
     	switch(choice){
     		case 1: enqueue();
     			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: printf("Exited from program");
		        break;
	        default: printf("Invalid Input");
		}
      }
 }
 void enqueue(){
  if(front==(rear+1)%size){
   	printf("Overflow Error\n");
   }
   else if(front==-1&&rear==-1){ 
   	rear++;
   	front++;
   	count++;
   	printf("Enter element to be inserted:");
   	scanf("%d",&A[rear]);
   	}
   else{
   	rear=(rear+1)%size;
   	printf("Enter element to be inserted:");
   	scanf("%d",&A[rear]);
   	count++;
   	}
   }
  void dequeue(){
  if (front==-1&&rear==-1){
        printf("Underflow error\n");
  } else {
  printf("Deleted element is:%d\n",A[front]);
  	if(front==rear){
  	front=-1;
  	rear=-1;
  	
        }else front=(front+1)%size;
        count--;
      }
   }
   void display(){
   if (front==-1&&rear==-1){
        printf("Circular Queue Empty \n");
  }else{
   printf("The Circular Queue is: ");
   int j=front;
   for(i=0;i<count;i++){
      printf("%d\t",A[j]);
      j=(j+1)%size;
      }
   printf("\n");
  }
      
