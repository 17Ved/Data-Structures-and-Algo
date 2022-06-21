// struct Node{
//     int data;
//     struct Node* next;
// }

// All operations are done in this file peek, pop, push, stactTop, isEmpty, isFull....  


#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node * next;
};
 
struct Node* top = NULL;
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
 
int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}
 
int peek(int pos){
    struct Node* ptr = top;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return 1;
    }
}

int stackTop(){
    return top->data;
}


int main(){
    // top = push(top, 78);
    // top = push(top, 7);
    // top = push(top, 8);
    
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 17);
    top = push(top, 78);
 
    // int element = pop(top); 
    // printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    for (int i = 1; i <= 5; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(i));
    }
    return 0;
}



