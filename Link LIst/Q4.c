// REVERSE LINK LIST USING RECURSIVE METHOD


#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nextadd;

}*head,*head2,*temp,*newnode;
void linklist(int key){

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->nextadd=NULL;

    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->nextadd=newnode;
        temp=newnode;
    }
}
void COPY_LIST(struct node *p){


    if(p)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=p->data;
        newnode->nextadd=NULL;

        if(head2==NULL){
            temp=head2=newnode;
        }else{
            temp->nextadd=newnode;
            temp=newnode;
        }

        COPY_LIST(p->nextadd);
    }


}

void display(struct node *p){
    if(p){
        printf("%d ",p->data);
        display(p->nextadd);
    }
}

void main(){
linklist(15);
    linklist(25);
    linklist(35);
    linklist(45);
    linklist(55);
    linklist(65);
    linklist(75);
    linklist(115);
    linklist(125);
    linklist(135);
    linklist(145);
    linklist(0);
    linklist(7);

    display(head);
    COPY_LIST(head);
    printf("\n");
    display(head2);
}
