// create and traverse and delete node in Circular Linked List
 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
    }*head;

void createList(int n);
void displayList();
void deletenode();


int main()
		{
    			int n, data, choice=1;
			head = NULL;

    		while(choice != 4)

    			{
        	printf("~~~~~~~~~~~~~~~~~~~~~\nCircular Linked List\n~~~~~~~~~~~~~~~~~~~~\n1. Create List\n2. Display List\n3. Delete Node\n4. Exit\n~~~~~~~~~~~~~~~~~~~\n");
        
        	printf("Enter your choice : ");

        	scanf("%d", &choice);

        	switch(choice)
        		{
            	case 1:
                	printf("Enter the total number of nodes in list: ");
                	scanf("%d", &n);
                	createList(n);
                	break;

            	case 2:
                	displayList();
				break;

            	case 3:
                	deletenode();
                	break;

            	case 4:
				exit(choice==4);
				break;

            	default:
                printf("Error! Invalid choice. Please choose between 1-4");
        		}

        
    		}

    		return 0;
		}

void createList(int n)
		{
    			int i, data;
    			struct node *prevNode, *newNode;

    		if(n >= 1)
    		{
        
        	head = (struct node *)malloc(sizeof(struct node));

        	printf("Enter data of 1 node: ");
        	scanf("%d", &data);

        	head->data = data;
        	head->next = NULL;

        	prevNode = head;

        
        	for(i=2; i<=n; i++)
        	{
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;

            prevNode = newNode;
        	}

        	prevNode->next = head;

        	printf("\n*Circular Linked List Created*\n");
    		}
		}


void displayList()
		{
    			struct node *current;
    			int n = 1;

    		if(head == NULL)
    		{
        		printf("List is empty.\n");
    		}
    		else
    		{
        		current = head;
        		printf("List have Data:\n");

        	do 
		{
            	printf("Data %d = %d\n", n, current->data);

            	current = current->next;
            	n++;
        	}while(current != head);
    		}
		}
				

void deletenode()  
			{  
    				struct node *current, *prevNode;  
    				if(head==NULL)  
    			{  
        			printf("\Empty");  
    			}  
    				else if (head ->next == head)  
    			{  
        			head = NULL;  
        			free(head);  
        			printf("\nNode Deleted\n");  
  
    			}  
   				 else   
    					{  
        					current = head;  
        					while(current ->next != head)  
        					{  
            					prevNode=current;  
            					current = current->next;  
       					 }  
       					 prevNode->next = current -> next;  
        					 free(current);  
        					 printf("\nNode Deleted\n");  
  
    					}  
			}  
//Ajithra_to create and traverse and delete node in Circular Linked List
 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
    }*head;

void createList(int n);
void displayList();
void deletenode();


int main()
		{
    			int n, data, choice=1;
			head = NULL;

    		while(choice != 4)

    			{
        	printf("~~~~~~~~~~~~~~~~~~~~~\nCircular Linked List\n~~~~~~~~~~~~~~~~~~~~\n1. Create List\n2. Display List\n3. Delete Node\n4. Exit\n~~~~~~~~~~~~~~~~~~~\n");
        
        	printf("Enter your choice : ");

        	scanf("%d", &choice);

        	switch(choice)
        		{
            	case 1:
                	printf("Enter the total number of nodes in list: ");
                	scanf("%d", &n);
                	createList(n);
                	break;

            	case 2:
                	displayList();
				break;

            	case 3:
                	deletenode();
                	break;

            	case 4:
				exit(choice==4);
				break;

            	default:
                printf("Error! Invalid choice. Please choose between 1-4");
        		}

        
    		}

    		return 0;
		}

void createList(int n)
		{
    			int i, data;
    			struct node *prevNode, *newNode;

    		if(n >= 1)
    		{
        
        	head = (struct node *)malloc(sizeof(struct node));

        	printf("Enter data of 1 node: ");
        	scanf("%d", &data);

        	head->data = data;
        	head->next = NULL;

        	prevNode = head;

        
        	for(i=2; i<=n; i++)
        	{
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;

            prevNode = newNode;
        	}

        	prevNode->next = head;

        	printf("\n*Circular Linked List Created*\n");
    		}
		}


void displayList()
		{
    			struct node *current;
    			int n = 1;

    		if(head == NULL)
    		{
        		printf("List is empty.\n");
    		}
    		else
    		{
        		current = head;
        		printf("List have Data:\n");

        	do 
		{
            	printf("Data %d = %d\n", n, current->data);

            	current = current->next;
            	n++;
        	}while(current != head);
    		}
		}
				

void deletenode()  
			{  
    				struct node *current, *prevNode;  
    				if(head==NULL)  
    			{  
        			printf("\Empty");  
    			}  
    				else if (head ->next == head)  
    			{  
        			head = NULL;  
        			free(head);  
        			printf("\nNode Deleted\n");  
  
    			}  
   				 else   
    					{  
        					current = head;  
        					while(current ->next != head)  
        					{  
            					prevNode=current;  
            					current = current->next;  
       					 }  
       					 prevNode->next = current -> next;  
        					 free(current);  
        					 printf("\nNode Deleted\n");  
  
    					}  
			}  
