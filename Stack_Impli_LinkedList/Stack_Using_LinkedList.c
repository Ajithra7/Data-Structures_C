#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
	int a;
	struct node *next;
 }node;

node* push(int n , node *p)
{
	node *q;
	q = (node*)malloc(sizeof(node));
	q->a = n;
	q->next = p;
	return q;
}

node* pop(node *p)
{	
	node *q;
	int t;
	printf("------------------");
	printf("\nPopped element = %d \n" , p->a);
	q = p;
	p = p->next;
	free(q);
	return p;
}


int main() 
{
	node *p , *q;
	int n , ch;
	p = NULL;
	while(1)
	{
	
	printf("\nStack Using Linked List\n-----------------------\nStack Operation: \n1.PUSH  \n2.POP \n3.DISPLAY STACK\n4.Exit\n-------------------\nEnter Your Choice:");
	scanf("%d" , &ch);
	if(ch == 1)
	{
		printf("\nEnter the element:   ");
		scanf("%d",&n);
		p = push(n,p);	
	}
	else if(ch == 2)
	{
		p = pop(p);
	}
	else if(ch == 3)
	{
		q = p;
		printf("\nStack =>");
		while( p!= NULL)
		{
			printf("\n%d" , p->a);
			p = p->next;
		}
		p = q;
	}
	else if(ch ==4)
	{
	    exit (q);
	}
	}
	 
	return 0;
}

