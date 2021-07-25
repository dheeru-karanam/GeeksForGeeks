#include "stdio.h"
int main(){
	int top,bottom,left,right;
	int row, column;
	scanf("%d%d", &row, &column);
	int arr[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	top = 0;
	bottom = row-1;
	left = 0;
	right = column-1;
	int dir = 1;
	while(top<=bottom && left<=right){
		if(dir%4==1){
			for(int i=left;i<=right;i++){
				printf("%d ",arr[top][i]);
			}
			top++;
		}
		else if(dir%4==2){
			for(int i=top;i<=bottom;i++){
				printf("%d ",arr[i][right]);
			}
			right--;
		}
		else if(dir%4==3){
			for(int i=right;i>=left;i--){
				printf("%d ",arr[bottom][i]);
			}
			bottom--;
		}
		else if(dir%4==0){
			for(int i=bottom;i>=top;i--){
				printf("%d ",arr[i][left]);
			}
			left++;
		}
		dir++;
		//printf("%d \n",dir%4);
	}
	return 0;
}
