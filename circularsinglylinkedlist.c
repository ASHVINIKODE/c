#include<stdio.h>
#include<stdlib.h>
//define the structure of the node
struct Node{
int data;
struct Node*next;
};
//function to create a new node
struct Node* createNode(int data){
    struct Node* newNode=(struct node*)malloc(sizeof(struct Node));
    newNode->data=data;
newNode->next=NULL;
return newNode;
}
//function to create a circular linked list
void createCircularList(struct Node**head,int n){
    struct Node*temp;
    struct Node*newNode;
    struct Node*last;
    //create the headnode
    *head=createNode(1) ;
    last=*head;
    //create the rest of the node
    int i;
    for(i=2;i<=n;i++){
        newNode=createNode(i);
        last->next=newNode;
        last=newNode;
    }
    //link the last node to the head to make it crcular
    last->next=*head;
}
//function to print the circular linked list
void printCircularList(struct Node*head){
    struct Node*temp=head;
    if(head!=NULL){
        do{
            printf("%d->",temp->data);
            temp=temp->next;

        }while(temp!=head);
        printf("%d(head)\n",head->data);//to show the circular nature
    }
}
int main(){
    struct Node*head=NULL;
    int n=4;
    createCircularList(&head,n);
    printCircularList(head);
    return 0;
}
