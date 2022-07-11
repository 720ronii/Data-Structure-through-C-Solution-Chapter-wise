#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *nextdata;
} *head,*head2,*temp,*newnode;


struct node* linklist1(int key){

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->nextdata=NULL;

    if(head==NULL){

        head=temp=newnode;
        return newnode;
    }else{
        temp->nextdata=newnode;
        temp=newnode;
    }
}
struct node* second_link_list(int keyelement){

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=keyelement;
    newnode->nextdata=NULL;

    if(head2==NULL){

        head2=temp=newnode;
        return newnode;
    }else{
        temp->nextdata=newnode;
        temp=newnode;
    }

}
void display(struct node *p){
    if(p){
        printf("%d ",p->data);
        display(p->nextdata);
    }

}
int check_identical(struct node *p,struct node *q){
    while(p){

        if(p->data !=q->data)
            {
                printf("Link list is not identical !");
                return 0;
            }
            p=p->nextdata;
            q=q->nextdata;

    }
    printf("Link list is identical");
    return 1;



}


void main(){
        linklist1(5);
        linklist1(5);
        linklist1(5);
        linklist1(5);
        linklist1(5);

     second_link_list(5);
     second_link_list(5);
     second_link_list(5);
     second_link_list(5);
//second_link_list(5);
    // second_link_list(5);

     //display(head);
     //display(head2);

    int a=check_identical(head,head2);

}
