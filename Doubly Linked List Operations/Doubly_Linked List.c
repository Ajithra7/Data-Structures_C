/*Ajithra - C Implementation of DLL : Create of doubly linked list, all insert and delete operations, search an element in the list and traverse the list.
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left,*right;
    int data;
};
 /*initialize_list(struct node **first);
 create_list(struct node **f,int n);
 first_insert(struct node **first,int item);  
 last_insert(struct node **first,int item);  
 any_insert(struct node **first,int pos,int item);  
 first_delete(struct node **first);  
 last_delete(struct node **first);  
 any_delete(struct node **first,int pos);  
 display(struct node *first);  
 search(struct node **first); */ 
void main ()
{
    struct node *first;
    int n,pos,item,ch;
    initialize_list(&first);
    printf("\n  Creating Doubly Linked List\n");
    printf("\n  ===========================\n");
    printf("\n  Enter Preferred Number of Nodes:\n ");
    scanf("%d",&n);
    create_list(&first,n);
    while(1)
    {
        printf("\n  ~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n  DLL - C Implementation");
        printf("\n  ~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\n  1.Insert at First Position");
        printf("\n  2.Insert at Last Position");
        printf("\n  3.Insert at Any Position");
        printf("\n  4.Delete from First Position");
        printf("\n  5.Delete from Last Position");
        printf("\n  6.Delete from Any Position");
        printf("\n  7.Traverse DLList");
        printf("\n  8.Search data from DLL");
        printf("\n  9.Quit Program");
        printf("\n  ~~~~~~~~~~~~~~~~");
        printf("\n  Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("\nEnter Item to be Inserted: ");
                    scanf("%d",&item);
                    first_insert(&first,item);
                    break;
            
            case 2:
                    printf("\nEnter Item to be Inserted : ");
                    scanf("%d",&item);
                    last_insert(&first,item);
                    break;
            
            case 3:
                    printf("\nEnter Position of Item : ");
                    scanf("%d",&pos);
                    printf("\nEnter Item to be Inserted: ");
                    scanf("%d",&item);
                    any_insert(&first,item,pos);
                    break;
            
            case 4:
                    printf("\nEnter Item to be Deleted : ");
                    scanf("%d",&item);
                    first_delete(&first);
                    break;
                    
            case 5:
                    printf("\nEnter Item to be Deleted : ");
                    scanf("%d",&item);
                    last_delete(&first);
                    break;
                    
            case 6:
                    printf("\nEnter Node Number to be Deleted : ");
                    scanf("%d",&n);
                    any_delete(&first,n);
                    break;        
            
            case 7:
                    display(first);
                    break;
                    
            case 8:
                    search(&first);
                    break;
                    
            case 9:
                    exit(0);
        }
    }
}
initialize_list(struct node **first)
{
    (*first)==NULL;
}
display(struct node *first)
{
    if(first==NULL)
     printf("\n List is Empty ");
    else
    {
        printf("\n Forward Traverse : ");
        printf("\n First<-> ");
        while(first!=NULL)
        {
            printf("%d<->",first->data);
            first=first->right;
        }
        printf("Last \n");
    }
}
create_list(struct node **f,int n)
{
    struct node *temp,*current;
    int i,item;
    for(i=1;i<=n;i++)
    {
        printf("\n Enter Data : ");
        scanf("%d",&item);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=item;
        temp->right=NULL;
        if((*f)==NULL)
        {
            (*f)=temp;
            temp->left=NULL;
        }
        else
        {
            current->right=temp;
            temp->left=current;
        }
        current=temp;
    }
}
first_insert(struct node **first,int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=NULL;
    if(*first==NULL)
     temp->right=NULL;
    else
    {
     temp->right=(*first);
     (*first)->left=temp;
    }
    (*first)=temp;
}
last_insert(struct node **first,int item)
{
    struct node *current,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->right=NULL;
    if(*first==NULL)
    {
        temp->left=NULL;
        (*first)=temp;
    }
    else
    {
        current=(*first);
        while(current->right!=NULL)
        current=current->right;
        temp->left=current;
        current->right=temp;
    }
}
any_insert(struct node **first,int pos,int item)
{
    struct node *temp,*current;
    int i;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    if(pos==1)
    {
        if(*first!=NULL)
         (*first)->left=temp;
        temp->right=(*first);
        temp->left=NULL;
        (*first)=temp;
    }
    else
    {
        i=2;
        current=(*first);
        while((i<pos)&&(current->right!=NULL))
        {
            i++;
            current=current->right;
        }
        temp->left=current;
        temp->right=current->right;
        if(current->right!=NULL)
        temp->right->left=temp;
        current->right=temp;
    }
}
first_delete(struct node **first)
{
    struct node *current;
    int item;
    if(*first==NULL)
    {
        printf("\n List is Empty ");
        return;
    }
    current=(*first);
    (*first)=(*first)->right;
    if(*first!=NULL)
    (*first)->left=NULL;
    item=current->data;
    free(current);
    printf("\n Deleted Item is: %d",item);
}
last_delete(struct node **first)
{
    struct node *current;
    int item;
    if(*first==NULL)
    {
        printf("\n List is Empty ");
        return;
    }
    current=(*first);
    while(current->right!=NULL)
    current=current->right;
    if(current->left!=NULL)
     current->left->right=current->right;
    else
     (*first)=NULL;
    item=current->data;
    free(current);
    printf("\n Deleted Item is: %d",item);
}
any_delete(struct node **first,int pos)
{
    struct node *current,*previous;
    int i=1,item;
    if(*first==NULL)
    {
        printf("\n List is Empty ");
        return;
    }
    current=(*first);
    while(current!=NULL)
    {
        if(i==pos)
        {
            item=current->data;
            if(current->left==NULL)
            {
                current->right->left=NULL;
                (*first)=current->right;
                free(current);
            }
            else if(current->right==NULL)
            {
                current->left->right=current->right;
                free(current);
            }
            else
            {
                current->left->right=current->right;
                current->right->left=current->left;
                free(current);
            }
            printf("\n Deleted item is: %d",item);
            return;
        }
        i++;
        current=current->right;
    }
    printf("\n Desired node Doesn't exist ");
}
search(struct node **first)
{
    int i=0,item,flag;
    struct node *temp;
    temp=(*first);
    if(first==NULL)
    {
        printf("\n List is Empty ");
    }
    else
    {
        printf("\n Enter Desired Element to be Searched : ");
        scanf("%d",&item);
        while(temp!=NULL)
        {
            if(temp->data==item)
            {
                printf("\n Element found %d ",i+1);
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            temp=temp->right;
        }
        if(flag==1)
        {
            printf("\n Element Unfound ");
        }
    }
}