//Queue using static array

#include<stdlib.h>
#define CAPACITY 5

int queue[CAPACITY];
int front=0, rear=0;

void enqueue();
void dequeue();
void traverse();

void main() {
    int ch;
    printf("Queue operation using Static array:");

    while(1) {
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                enqueue();
                break;
            
            case 2:
                dequeue();
                break;
            
            case 3:
                traverse();
                break;
            
            case 4:
                exit(1);
            
            default:
                printf("\nWrong Choice........!\n");
        }
    }
}

void enqueue() {
    if(rear==CAPACITY) {
        printf("Queue is full!\n");
    } else {
        int ele;
        printf("Enter data: ");
        scanf("%d",&ele);
        queue[rear] = ele;
        rear++;
    }
}

void dequeue() {
    if(front==rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Deleted item: %d\n",queue[front]);
        front++;
    }
}

void traverse() {
    if(front==rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are: ");
        for(int i=front; i<rear; i++)
            printf("%d, ",queue[i]);
        printf("\n");
    }
}