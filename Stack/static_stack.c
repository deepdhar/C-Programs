//Static Stack using array

#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5

typedef struct stk{
	int arr[CAPACITY];
	int top;	
}stack;

void push(stack*, int);
int pop(stack*);
int top(stack*);
int isFull(stack*);
int isEmpty(stack*);

int main()
{
	int ch, item;
	stack s;
	stack* p;
	p = &s;
	p->top=-1;
	
	while(1) {
		printf("1.Push\n2.Pop\n3.Top\n4.Quit\n\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch (ch) {
			case 1:
				printf("Enter item to push: ");
				scanf("%d",&item);
				push(p, item);
				break;
			case 2:
				item = pop(p);
				if (item!=-9999)
					printf("Popped item: %d\n\n",item);
				break;
			case 3:
				item = top(p);
                if(item!=-9999)
                    printf("\nTop item is: %d\n\n",item);
                break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice! Try again........");
		}
	}
	return 0;
}

int isFull(stack *p) {
	if(p->top==CAPACITY-1)
		return 1;
	else
		return 0;
}

int isEmpty(stack *p) {
	if(p->top==-1)
		return 1;
	else
		return 0;
}

void push(stack *p, int item){
	if(isFull(p)) {
		printf("Stack Overflow.......\n");
		return;
	}
	p->top = p->top + 1;
	p->arr[p->top] = item;
}

int pop(stack *p) {
	int item;
	if(isEmpty(p)) {
		printf("Stack Underflow........\n\n");
		return (-9999);
	}
	item = p->arr[p->top];
	p->top = p->top - 1;
	return item;
}


int top(stack *p) {
	int item;
	if (isEmpty(p)) {
		printf("Underflow.......\n\n");
		return (-9999);
	}
	item = p->arr[p->top];
	return (item);
}







