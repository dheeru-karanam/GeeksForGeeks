#include <stdio.h>
int main(){
	int i,j,k;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int pointer=0;
	while(pointer<3){
		if(pointer%2==0){
			for(int i=2;i>=0;i--){
				printf("%d ",arr[pointer][i]);
			}
			pointer++;
			printf("\n");
		}
		else if(pointer%2==1){
			for(int i=0;i<3;i++){
				printf("%d ",arr[pointer][i]);
			}
			pointer++;
			printf("\n");
		}
	}
	return 0;
}