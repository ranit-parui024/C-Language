#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    
} Node;

Node *getnode(int x)
{
    Node *ptr;
    ptr = malloc(sizeof(Node));
    ptr -> data = x;
    ptr -> next = NULL;
    return ptr;
}

Node *build_node(){
    Node *temp1, *temp2, *temp3;
    temp1 = getnode(1);
    temp2 = getnode(2);
    temp3 = getnode(3);

    temp1 -> next = temp2;
    temp2 -> next = temp3;

    return temp1;
}

Node *HP;

void print(Node *S){
    while(S!=NULL){
        printf("Element : %d\n", S -> data );
        S = S -> next;
    }
}

Node *AddxAftery(Node *S, int x, int y){
    Node *p = getnode(x);
    if(S==NULL){
        return ;
    }
    while(S->next!=NULL && S->data != y){
        S = S->next;
    }
    if(S->data == y){
        p->next = S->next;
        S->next = p;
    }
    else{
        printf("Element not found\n");
        free(p);
    }
}

Node *delete_y(Node *q, int y){
    Node *p = NULL;
    if(q==NULL){
        return;
    }
    else if(q->data == y){
        p = q;
        HP = p;
        free(q);
        return;
    }
    else{
        while (q->next == NULL && q->data == y)
        {
            p = q;
            q = q->next;
        }
    if(q->data == y){
        p->next = q->next;
        free(q);
    }else{
        printf("Element not found");
    }
    }
}

int main (){

    HP = build_node();
    printf("Before deleting \n");
    print(HP);

    // delete_y(HP, 1);
    // printf("Before deleting \n");
    // print(HP);
    
    return 0;
}