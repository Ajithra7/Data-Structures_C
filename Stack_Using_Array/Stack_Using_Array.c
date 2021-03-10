#include<stdio.h>
#include<conio.h>

#define SIZE 100

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   
   while(1){
      printf("\n------------------");
      printf("\nStack Operations:");
      printf("\n------------------");
      printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\n-----------------");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be Pushed: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Pushing is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nPushed Successfully!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Popping is not possible!!!");
   else{
      printf("\nPopped Data is: %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack Data are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}