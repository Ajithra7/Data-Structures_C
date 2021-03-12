/*Insert, Delete and Traverse in Singly linked list*/
#include<stdio.h>  
#include<stdlib.h>

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;

void firstinsert();   
void insertlast();  
void insertany();  
void deletefirst();  
void deletelast();  
void deleteany();  
void display();  
 void main ()  
{  
    int choice =0;  
    while(choice != 8)   
    {  
        printf("\n-----------------------------------"); 
        printf("\nSingly Linked List Operations"); 
        printf("\n-----------------------------------"); 
        printf("\n1.First Position Insert\n2.Last Position Insert\n3.Any Position Insert\n4.First Position Delete\n5.Last Position Delete\n6.Any Position Delete\n7.Traverse\n8.Exit");  
        printf("\n-----------------------------------"); 
        printf("\nEnter your choice:");
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            firstinsert();      
            break;  
            case 2:  
            insertlast();         
            break;  
            case 3:  
            insertany();       
            break;  
            case 4:  
            deletefirst();       
            break;  
            case 5:  
            deletelast();        
            break;  
            case 6:  
            deleteany();          
            break;  
            case 7:  
            display();        
            break;  
            case 8:  
            exit(0);  
            break;  
            default:  
            printf("\nPlease enter valid choice:");  
        }  
    };  
}  
void firstinsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW !");  
    }  
    else  
    {  
        printf("\nEnter value:");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted !");  
    }  
      
}  
void insertlast()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW !");     
    }  
    else  
    {  
        printf("\nEnter value:");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted !");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted !");  
          
        }  
    }  
}  
void insertany()  
{  
    int i,loc,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW !");  
    }  
    else  
    {  
        printf("\nEnter element value:");  
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the location you want to insert: ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert !");  
                return;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("\nNode inserted !");  
    }  
}  
void deletefirst()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining !");  
    }  
}  
void deletelast()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty !");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted !");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last !");  
    }     
}  
void deleteany()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete !");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  

void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print !");  
    }  
    else  
    {  
        printf("\nprinting values:\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}    