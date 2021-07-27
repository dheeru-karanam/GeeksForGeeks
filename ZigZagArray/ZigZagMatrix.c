#include <stdio.h>
int main(){
	int i,j,k;
	int row,column;
	scanf("%d%d",&row, &column);
	int arr[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int pointer=0;
	while(pointer<row){
		if(pointer%2==0){
			for(int i=column-1;i>=0;i--){
				printf("%d ",arr[pointer][i]);
			}
			pointer++;
			printf("\n");
		}
		else if(pointer%2==1){
			for(int i=0;i<column;i++){
				printf("%d ",arr[pointer][i]);
			}
			pointer++;
			printf("\n");
		}
	}
	return 0;
}
