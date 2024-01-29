#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct LinkedList{
    struct node* head;
};
void push(struct LinkedList* list, int new_data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node ->data = new_data;
    new_node ->next = list->head;
    list->head = new_node;
}
void deleteNode(struct LinkedList* list, int key){
    struct node* temp = list->head;
    struct node* prev = NULL;

    if(temp != NULL && temp->data == key){
        list->head = temp->next;
        free(temp);
        return;
    }
    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}
    void printList(struct LinkedList* list){
        struct node* tnode = list->head;
        while (tnode != NULL){
            printf("%d ",tnode->data);
            tnode = tnode->next;
        }
    }
    int main(int argc, char *argv[]){
        struct LinkedList llist;
        llist.head = NULL;
        push(&llist, 7);
        push(&llist, 1);
        push(&llist, 3);
        push(&llist, 2);

        printf("\n Created linked list is:");
        printList(&llist);

        deleteNode(&llist, 1);

        printf("\n Linked List after deletion of 1:");
        printList(&llist);

        return 0;
    }
