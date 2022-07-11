#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nextadd;
} *head,*temp;

struct node*  linklist(int key){

    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->nextadd=NULL;

    if(head==NULL){
        temp=head=newnode;
        return head;
    }else{
        temp->nextadd=newnode;
        temp=newnode;
    }
}
void find_smallest_largest(struct node *p){
    int max=0;
    int min=p->data;

    while(p){
        if(p->data>max){
            max=p->data;

       }else if(p->data < min){
            min=p->data;
       }
       p=p->nextadd;
    }
    printf("MAX: %d  MIN: %d",max,min);



}

void main(){

   head=linklist(0);
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

        find_smallest_largest(head);
}
