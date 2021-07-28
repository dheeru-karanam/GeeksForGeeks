#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct stack{
	int top;
	int capacity;
	int *arr;
};

int isFull(struct stack *S){
	printf("%d %d", S->top, S->capacity-1);
	return S->top==S->capacity-1;
}

int push(struct stack *S, char ele){
		S->top++;
		S->arr[S->top] = ele;
		return -1;
}

char pop(struct stack *S){
	char ret;
	if(S->top!=-1){
		ret = S->arr[S->top];
		S->top-=1;
	}
	return ret;
}

char peek(struct stack *S){
	if(S->top != -1){
		return S->arr[S->top];
	}
	else{
		return '1';
	}
}

int main(){
	struct stack *Stack;
	char *str=""; 
	Stack = (struct stack *)malloc(sizeof(struct stack));
	Stack->capacity = strlen(str);
	Stack->top = -1;
	Stack->arr = (int *)malloc(sizeof(int)*Stack->capacity);
	printf("%s",str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='(' || str[i] =='[' || str[i] =='{'){
			push(Stack, str[i]);			
		}
		else{
			if(str[i]==']' && peek(Stack)=='['){
				pop(Stack);
			}
			else if(str[i]=='}' && peek(Stack)=='{'){
				pop(Stack);
			}
			else if(str[i]==')'&& peek(Stack)=='('){
				pop(Stack);
			}
			else{
				printf("Not Matched\n");
				return 0;
			}
		}
	}
	printf("\n\nMatched \n");
	free(Stack);
	return 0;
}
