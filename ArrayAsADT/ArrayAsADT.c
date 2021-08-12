#include "stdio.h"
#include "stdlib.h"
struct Array{
	int *A;
	int length;
	int size;
};
void Display(struct Array arr){
	int i;
	for(i=0;i<arr.size;i++){
		printf("%d ",arr.A[i]);
	}
	return;
}
void Add(struct Array *arr, int element){
	arr->A[arr->size] = element;
	arr->size++;
}
void Pop(struct Array *arr){
	arr->size = arr->size -1;
}
void Insert(struct Array *arr, int Index, int element){
	int i;
	if(Index < arr->size){
		for(i=arr->size;i>Index;i--){
			arr->A[i] = arr->A[i-1];
		}
		arr->A[Index] = element;
		arr->size++;
	}
	else{
		printf("Index Out of Range\n");
	}
}

void Delete(struct Array *arr, int Index){
	int i;
	if(Index > 0 && Index < arr->size){
		for(i=Index; i < arr->size; i++){
			arr->A[i] = arr->A[i+1];
		}
		arr->size--;
	}
	else{
		printf("\nOut of bounds\n");
	}
}

int search(struct Array *arr, int element){
	int i;
	for(i=0;i<arr->size;i++){
		if(arr->A[i] == element){
			return i;
		}
	}
	return -1;
}

int main(){
	struct Array arr;
	int i;
	printf("Enter size of Array:\n");
	scanf("%d", &arr.size);
	arr.A = (int *)malloc(arr.size*sizeof(int));
	for(i=0;i<arr.size;i++){
		scanf("%d", &arr.A[i]);
	}
	Display(arr);
	Add(&arr, 10);
	printf("\n");
	Display(arr);
	Pop(&arr);
	printf("\n");
	Display(arr);
	Insert(&arr, 3, 20);
	printf("\n");
	Display(arr);
	Delete(&arr, 2);
	printf("\n");
	Display(arr);
	printf("\n%d", search(&arr, 20));
	return 0;
}