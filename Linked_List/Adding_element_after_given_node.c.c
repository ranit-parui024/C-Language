#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *getnode(int x){
    Node *ptr = malloc(sizeof(Node));
    ptr -> data = x;
    ptr -> next = NULL;
    return ptr;
}

Node *build_node(){
    Node *temp1, *temp2, *temp3, *temp4;
    temp1 = getnode(1);
    temp2 = getnode(2);
    temp3 = getnode(3);
    temp4 = getnode(4);

    temp1 -> next = temp2;
    temp2 -> next = temp3;
    temp3 -> next = temp4;

    return temp1;
}

Node *AddxAftery(Node *q, int x, int y){
    Node *p = getnode(x);
    if(q == NULL){
        return;
    }
    while(q->next != NULL && q->data!=y){
        q = q->next;
    }
    if(q->data == y){
        p->next = q->next;
        q->next = p;
    }
    else{
        printf("y not found");
        free(p);
    }
}

void print(Node *S){
    while (S != NULL)
    {
        printf("Element : %d\n", S->data);
        S = S->next;
    }
}
Node *HP; //global
int main () {
    HP = build_node();
    printf("before adding element\n");
    print(HP);

    AddxAftery(HP, 8, 3);
    printf("After adding element\n");
    print(HP);

}