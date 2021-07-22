#include "stdio.h"
#include "stdlib.h"
#include "math.h"
struct Node{
	int data;
	struct Node * next;
}*head;

struct Stack{
	int top;
	int *arr;
	int size;
}stk;

void display(struct Node *head){
	struct Node *ptr;
	ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr = head;
	while(ptr){
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	return ;
}

void Display_stack(struct Stack stk){
	for(int i=0;i<stk.size;i++){
		printf("%d ",stk.arr[i]);
	}
	return ;
}

int pop(){
	if(stk.top!=-1){
		int value = stk.arr[stk.top];
		stk.top--;
		return value;
	}
	else{
		return -1;
	}
}

int main(){
	struct Node *head,*qtr,*ptr;
	head = (struct Node *)malloc(sizeof(struct Node));
	ptr = (struct Node *)malloc(sizeof(struct Node));
	int n;
	ptr = head;
	scanf("%d ",&n);
	float count = 0;
	for(int i=0;n>=0;i++){
		count += 1;
		qtr = (struct Node *)malloc(sizeof(struct Node));
		qtr->data = n;
		qtr->next = NULL;
		if(i==0){
			head = qtr;
			ptr = head;
		}
		ptr->next = qtr;
		ptr = qtr;
		scanf("%d",&n);
	}
	display(head);
	printf("\n");
	ptr =  head;
	stk.size = ceil(count/2);
	stk.top = -1;
	stk.arr = (int *)malloc(sizeof(int)*stk.size);
	for(int i=0;i<stk.size;i++){
		stk.top++;
		stk.arr[stk.top] = ptr->data;
		ptr = ptr->next;
	}
	if(((int)count)%2 != 0){
		pop();
	}
	printf("Stack Elements :");
	Display_stack(stk);
	printf("\n");
	while(ptr){
		if(ptr->data != pop()){
			printf("No, It is not a palindrome");
			return 0;
		}
		ptr = ptr->next;		
	}
	printf("Yes, It is a palindrome");
	free(head);
	return 0;
}