#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

int push(int x){
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("stack is full\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
        
        
    }
       
}
int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
void display()
{
    struct Node *p;
    p=top;
    while(p!=NULL){
        printf("%d pushed to the stack\n",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    

    display();
    printf("%d poped from the stack\n",pop());
    printf("%d poped from the stack\n",pop());
     printf("%d poped from the stack\n",pop());
    return 0;

}