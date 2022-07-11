#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nextdata;
} *head,*temp,*newnode;


void linklist(int key){

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->nextdata=NULL;


    if(head==NULL)
    {
        temp=head=newnode;
    }
    else
    {
        temp->nextdata=newnode;
        temp=newnode;
    }

}
void swap_adjacent(struct node *p){
    int temp_value;
    while(p!=NULL){

        temp=p;
        temp_value=temp->data;
        p=p->nextdata;

        temp->data=p->data;
        p->data=temp_value;
        p=p->nextdata;
    }

}

void display(struct node *p){

    if(p){
        printf("%d ",p->data);
        display(p->nextdata);
    }

}
void main(){
    linklist(1);
    linklist(10);
    linklist(100);
    linklist(1000);
    linklist(10000);
    linklist(100000);
    linklist(1000000);
    linklist(100000000);
    linklist(0);
    linklist(-1);
    //display(head);
    swap_adjacent(head);

    //printf("\n");
    display(head);
}

