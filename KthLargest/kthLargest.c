#include <stdio.h>
#include <stdlib.h>

struct array{
	int size;
	int pos;
	int *arr;
}*heap;
void display(struct array *heap){
	for(int i=0;i<heap->size;i++){
		printf("%d ",heap->arr[i]);
	}
	return;
}
void insert(struct array *heap, int ele){
	int i, temp;
	temp = ele;
	i = heap->pos;
	while(i>0 && (temp > heap->arr[i/2])){
		heap->arr[i] = heap->arr[i/2];
		i = i/2;
	}
	heap->arr[i] = temp;
}

void insertion(struct array *heap,int ele){
	int i, temp;
	temp = ele;
	i = heap->pos;
	while(i>0 && (temp>heap->arr[i-1])){
		heap->arr[i] = heap->arr[i-1];
		i--;
	}
	heap->arr[i] = temp;
}

void delete(){
	int i=0;
	
}




int main(){
	int temp;
	heap = (struct array *)malloc(sizeof(struct array));
	heap->size = 8;
	heap->pos = 0;
	heap->arr = (int *)calloc(sizeof(int)*(heap->size),0);
	for(int i=0;i<heap->size;i++){
		heap->arr[i] = -2147483648;
	}
	display(heap);
	printf("\n\n\n");	
	for(int i=0;i<7;i++){
		temp = rand()%120;
		printf("%d ",temp);
		//display(heap);
		//printf("\n\n\n");
		insertion(heap, temp);
		heap->pos++;
	}
	printf("\n\n\n");
	display(heap);
	free(heap);
	return 0;
}
/*
k = 3
inp: 6 5 4 3 2 1
out: -1 -1 4 4 4 4

inp: 6 3 4 5 2 1
*/

