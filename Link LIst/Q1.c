#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *nextadd;


} *head=NULL,*temp,*newnode;
struct node *head;

struct node* linklist(int key){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->nextadd=NULL;

    if(head==NULL){
        head=temp=newnode;
        return head;
    }else{
        temp->nextadd=newnode;
        temp=newnode;

    }
}
void display(struct node *p){
   if(p!=NULL){
    printf("%d ",p->data);
    display(p->nextadd);
   }
}
int count_element(int key,struct node *p){
    int occurance=0;
    while(p!=NULL){
        if(p->data==key){
            occurance++;
        }
        p=p->nextadd;
    }
    return occurance;
}
void main(){
    printf("Enter the element to search in link list: ");
    int key_element;
    scanf("%d",&key_element);

   head=linklist(5);
        linklist(55);
        linklist(15);
        linklist(25);
        linklist(35);
        linklist(45);
        linklist(55);
        linklist(55);
        linklist(55);
        linklist(65);
        linklist(75);
        linklist(55);

        display(head);
        int c=count_element(key_element,head);
        printf("\n\nNo of element are: %d",c);


}
