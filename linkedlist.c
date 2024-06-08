// singly linked list and circular linked list
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//     }
// }
// doubly linked list and doubly circluar linked list
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// }
//singly linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

void main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1. Insert in beginning\n2. Insert at last\n3. Insert at any random location\n4. Delete from Beginning\n5. Delete from last\n6. Delete node after specified location\n7. Search for an element\n8. Show\n9. Exit\n");
        printf("\nEnter your choice?\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            display();
            break;
        case 8:
            search();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("please enter a valid choice.....");
        }
    }
}
// INSERT AT BEGINNING
void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nENTER VALUE\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNODE INSERTED");
    }
}
// INSERT AT LAST
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nENTER VALUE\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
            printf("\nNODE INSETED");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            printf("\nNODE INSERTED");
        }
    }
}
// INSERT AT RANDOM LOCATION
void randominsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nENTER ELEMENT VALUE\n");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nENTER THE LOCATION AFTER WHICH YOU WANT TO INSERT\n");
        scanf("%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\nCAN'T INSERTED");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNODE INSERTED");
    }
}
// DELETE FROM BEGINNING
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nLIST IS EMPTY\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNODE DELETED FROM THE BEGINNING...");
    }
}
// DELETE FROM LAST
void last_delete(){
    struct node*ptr,*ptr1;
    if(head==NULL){
printf("\nLIST IS EMPTY");

    }
    else if(head->next==NULL){
        head=NULL;
        free(head);
        printf("\nONLY NODE OF THE LIST DELETED...\n ");

    }else{
        ptr=head;
        while (ptr->next !=NULL){
            ptr1=ptr;
            ptr=ptr->next;

        }
        ptr1->next=NULL;
        free(ptr);
        printf("\nDELETED NODE FROM THE LAST...\n ");
    }
}
//DELETE FROM RANDOM LOCATION
void random_delete(){
    struct node*ptr,*ptr1;
    int loc,i;
    printf("\nENTER THE LOCATION OF THE NODE AFTER WHICH YOU WANT TO PERFORM  DELETION\n");
    scanf("%d",&loc);
    ptr=head;
    for(i=0;i<loc;i++){
        ptr1=ptr;
        ptr=ptr->next;
        if(ptr==NULL){
            printf("\nCAN'T DELETE\n");
            return;
        }
    }
    ptr1->next=ptr->next;
    free(ptr);
    printf("\nDELETED NODE %d",loc+1);
}
//search for an element
void search(){
    struct node*ptr;
    int item,i=0,flag=0;
    ptr=head;
    if(ptr==NULL){
        printf("\nEMPTY LIST\n");

    }else{
        printf("\nENTER ITEM WHICH YOU WANT TO SEARCH\n");
        scanf("%d",&item);
        while(ptr!=NULL){
            if(ptr->data==item){
                printf("\nITEM FOUND AT LOCATION %d\n ",i+1);
                flag=1;
            }
            i++;
            ptr=ptr->next;

        }
        if(flag==0){
            printf("ITEM NOT FOUND\n");
        }
    }
}
//display the list
void display(){
    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("NOTHING TO PRINT\n");
    }else{
        printf("\nPRINTING VALUES...\n");
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
