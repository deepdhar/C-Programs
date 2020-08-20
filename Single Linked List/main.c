/* Basic Single Linked List*/

#include<stdio.h>
#include<stdlib.h>

void append(void);
void addAtBegin(void);
void addAtAfter(void);
int length(void);
void display(void);
void delete(void);

struct node {
    int data;
    struct node* link;
};

struct node* root;
int len;

void main()
{
    int ch;
    while(1) {
        printf("\nSingle linked list operations: \n");
        printf("1.Append\n");
        printf("2.Add at begin\n");
        printf("3.Add after\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Quit\n");

        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch) {

            case 1:
                append();
                break;
            
            case 2:
                addAtBegin();
                break;
            
            case 3:
                addAtAfter();
                break;
            
            case 4:
                len = length();
                printf("The legnth: %d\n\n",len);
                break;
            
            case 5:
                display();
                break;
            
            case 6:
                delete();
                break;
            
            case 7:
                exit(1);

            default:
                printf("Invalid choice!\n");
        }
    }
}

void append() {
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if (root==NULL) {
        root = temp;
    }
    else {
        struct node* p;
        p = root;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    }
}

void addAtBegin() {
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node date: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if (root==NULL)
        root = temp;
    else {
        temp->link = root;
        root = temp;
    }
}

void addAtAfter() {
    struct node* temp;
    int loc, len;
    printf("Enter location: ");
    scanf("%d",&loc);
    len = length();
    if (loc>len) {
        printf("Invalid location!\n");
        printf("Currently the list has %d nodes",len);
    }
    else {
        int i=1;
        struct node* p;
        p = root;
        while(i<loc) {
            p = p->link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter node data: ");
        scanf("%d",&temp->data);
        temp->link = p->link;
        p->link = temp;
    }
}

int length() {
    int count=0;
    struct node* temp;
    temp = root;
    while(temp!=NULL) {
        count++;
        temp = temp->link;
    }
    return count;
}

void display() {
    struct node* temp;
    temp = root;
    if (temp==NULL)
        printf("List is empty\n\n");
    else {
        while(temp!=NULL) {
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
}

void delete() {
    struct node* temp;
    int loc;
    printf("Enter location to delete: ");
    scanf("%d",&loc);
    if(loc>length())
        printf("Invalid location");
    else if(loc==1) {
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    } 
    else {
        struct node* p = root, *q;
        int i=1;
        while(i<loc-1) {
            p = p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);
    }
}