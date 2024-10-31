#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;

}*start=NULL;

void create(int k){
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory allocation failed");
        return;
    }
    temp->data=k;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }else
    {
        q=start;
        while(q->link!=NULL)
        {
            q=q->link;
        }
        q->link=temp;
    }


}

void display()
{
    struct node *q,*temp;
    temp=start;
    if(temp==NULL)
    {
        printf("the linked list is empty\n");
    }
    while(temp!=NULL)
    {
     printf("%d->",temp->data);
     temp=temp->link;
    }
    printf("->NULL\n");

}

void del_node_beg()
{
    struct node *temp;
    temp=start;
    start=temp->link;
    free(temp);


}

void main(){
    printf("this code is written to do some operation so select numbers to :\n1. add node at the beginning of the linked-list \n2. add node continiously\n3. add node between 2 nodes\n4. delete node at the beginning\n5. delete node between 2 node\n6. deletion of last node\n7. to display\nn8. to exit\n");
    while(1)
    {
        printf("select your choice : ");
        int x;
        scanf("%d",&x);
        if(x==1)
        {

        }else if(x==2)
        {
            printf("enter the number to add in the linked list : \n");
            int n;
            scanf("%d",&n);
            create(n);
        }else if(x==8)
        {
            return;
            exit(0);
        }else if(x==7)
        {
            display();
        }else if(x==4)
        {
            printf("node at the beginning is deleted successfully\n");
            del_node_beg();
        }
    }


}
