#include <stdio.h>
#include <stdlib.h>
typedef struct lklist
{
    int info;
    struct lklist *next;
} node;
void main()
{
    int data, item, ch,i=1,flag=0;
    node *head = NULL, *temp,*ptr;
    while (1)
    {
        printf("\npress 1 for insert at begning\n");
        printf("press 2 for insert at end\n");
        printf("press 3 insert after element \n");
        printf("press 4 insert at specific position\n");
        printf("press 5 for delete at begning\n");
        printf("press 6 delete at end\n");
        printf("press 7 delete specific element\n");
        printf("press 8 delete complete all \n");
        printf("press 9 for search\n");
        printf("press 10 for traversing\n");
        printf("press 11 for exit\n");
        printf("Enter Your Choice\n");
    
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter the element to be insterted at begning\n");
        scanf("%d", &data);
        temp = (node *)malloc(sizeof(node));
        temp->info = data;
        if(head!=NULL){                 //if head null nahi hai 
            temp->next = head;
        }
        else temp->next=NULL;           //aagar hai to tamp ke next me NULL jaega
        head = temp;
        printf("node inserted\n");
        break;
    case 2:
    temp=head;
    printf("enter the element to be inserted at last\n");
    scanf("%d",&data);
    ptr= (node*)malloc(sizeof(node));
    ptr->info=data;
    ptr->next=NULL;
    
    if (head==NULL)
    {
        ptr= head;       //agar head null hai to ptr me haed aajega nahi to vo last me jake add kar dega jo nade ka pointe usme last node ka next
    }
    else{
       while (temp->next!=NULL)
       {
           temp=temp->next;

       }
       temp->next=ptr;
    }
    printf("node inserted\n");
    
     break;
    case 3:
    printf("Enter the element after which you Want to Insert\n");
    scanf("%d",&item);
    printf("enetr the element which is to be inserted\n");
    scanf("%d",&data);
    ptr=(node*)malloc(sizeof(node));
    ptr->info=data;
    temp=head;
    if (head==NULL)
    {
        printf("cant insert\n");
    }
    else{
        while (temp!=NULL)    
        {
            if (temp->info==item)
            {
                ptr->next=temp->next;
                temp->next=ptr;
                printf("node Inserted\n");
                break;
            }
           
            temp=temp->next;
             }
             }
             if(temp==NULL){
                 printf("element not found in the list\n");
             }
    
        break;
    case 4:
    printf("enter the position at which you want to insert");
    scanf("%d",&item);
    
    printf("enter the elememt  which you want to insert");
    scanf("%d",&data);
    ptr=(node*)malloc(sizeof(node));
    ptr->info=data;
    temp=head;
     if (head==NULL)
    {
        printf("cant insert\n");
    }
    else{
       
        while (i<item-1)
        {
           temp=temp->next;
           i++;
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("node inserted\n");
        
    }
    
      break;
    case 5:
    if(head==NULL){
        printf("linked list is empty\n");

    }
    else{
    temp=head;
    head=temp->next;
    free(temp);
    printf("element deleted\n");
    }
        break;
    case 6:
    temp=head;
    if (head==NULL)
    {
        printf("LInked List is Empty");
        break;
    }
    
          if (head->next==NULL)
          {
              
              head=NULL;
              free(temp);
            }
            else
            {
                while (temp->next!=NULL)
                {
                    ptr=temp;
                    temp=temp->next;
                }
                ptr->next=NULL;
                free(temp);
                printf("element deleted\n");
                }
               
        break;
    case 7:
      
       printf("Enter the element which you Want to delete\n");
    scanf("%d",&item);
    temp=head;
    if (head==NULL)
    {
       printf("cant delete\n");
      
    }
    else if (head->next==NULL)
    {
       head=NULL;
       free(temp);
    }
     else{
    while (temp!=NULL)
    {
        ptr=head;
        if (temp->info==item)
        {  
         
            
            ptr->next=temp->next;
            free(temp);
            printf("Element Deleted");
            break;
            }
        ptr=temp;
        temp=temp->next;
        
        }
        if(temp==NULL){
            printf("element not Found\n");
        }
        }
        break;
    case 8:
    if (head==NULL)
    {
              printf("empty linked list");
    }
    temp=head;
    head=NULL;
    while (temp->next=NULL)
    {
        ptr=temp;
        temp=temp->next;
        free(ptr);
    }
    

    
        break;
    case 9:
    printf("enter the you want to Search\n");
    scanf("%d",&item);
    temp=head;
    while (temp!=NULL)
    {
        if(temp->info==item){
            printf("element found\n");
            flag=1;
        }
        
        temp=temp->next;
    }
    if(flag==0)
    printf("element not found\n");
    
        break;
    case 10:
    if (head==NULL)
    {
        printf("empty LInked list");
    }
    else{
    printf("Linked list ");
        temp = head;
        while (temp!= NULL)

        {
            printf("%d,",temp->info);
            temp=temp->next;
        }
    }
        break;
       
    case 11:
     exit(0);
break;

    default:
        break;
    }
    }
}
