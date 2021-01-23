//Queue using linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct queue {
    int data;
    struct queue* link;
}queue;

queue *front=NULL;

void enqueue();
void dequeue();

void main()
{
    int choice;
    while(1) {
        printf("\n1.Enqueue \n2.Dequeue \n3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: enqueue();
                    break;
            
            case 2: dequeue();
                    break;
            
            case 3: exit(1);
                    
            default: printf("\nWrong choice!\n");
        }
    }
}

void enqueue() {
    queue* temp;
    temp = (queue*)malloc(sizeof(queue));
    printf("Enter data to insert: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(front==NULL) {
        front = temp;
    } else {
        queue* rear = front;
        while(rear->link != NULL) {
            rear = rear->link;
        }
        rear->link = temp;
    }
}

void dequeue() {
    int item;
    queue* temp;

    if(front==NULL) {
        printf("\nUnderflow.....\n");
    } else {
        item = front->data;
        printf("\nDeleted %d\n",item);

        temp = front;
        front = front->link;
        temp->link = NULL;
        free(temp);
    }
}