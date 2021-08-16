#include "stdio.h"
#include "stdlib.h"
struct Node{
	int data;
	struct Node *next;
}*first;

void create(int A[],int n, struct Node *first){
	int i;
	struct Node *t,*last, *looped;
	last = (struct Node *)malloc(sizeof(struct Node));
	looped = (struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++){
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
	//	if(i==2){
	//		looped = t;
	//	}
		last->next=t;
		last=t;
	}
	//last->next = looped;
}

void Display(struct Node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
int isloop(struct Node *ptr){
	struct Node *qtr;
	qtr =(struct Node *)malloc(sizeof(struct Node));
	qtr = ptr;
	do{
		ptr = ptr->next;
		qtr = qtr->next;
		qtr = qtr ? qtr->next: qtr; 
	}while(ptr && qtr && ptr!=qtr);
	return ptr == qtr ? 1 : 0;
}

int main(){
	struct Node *first; 
	int A[5] = {1,2,3,4,5};
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	create(A, 5, first);
	Display(first);
	printf("%d ",isloop(first));
	free(first);
}