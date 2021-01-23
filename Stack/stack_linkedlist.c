//Stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void push(struct node**, int);
int pop(struct node**);

int main()
{
    struct node* top = NULL;
    int ch, data;

    while(1) {
        printf("1.Push \n2.Pop \n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                printf("\nEnter item to push: ");
                scanf("%d",&data);
                printf("\n");
                push(&top, data);
                break;
            
            case 2:
                data = pop(&top);
                if (data!=-9999)
                    printf("\nPopped item is: %d\n\n",data);
                break;
            
            case 3:
                exit(1);
            
            default:
                printf("\nWrong choice......\n\n");
        }
    }
}

void push(struct node** top, int item) {
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->link = *top;
    *top = new_node;
    return;
}

int pop(struct node** top) {
    int item;
    struct node* temp;
    if(*top==NULL) {
        printf("\nStack Underflow......\n\n");
        return (-9999);
    }

    item = (*top) -> data;
    temp = *top;
    *top = (*top) -> link;
    temp -> link = NULL;
    free(temp);
    return item;
}
