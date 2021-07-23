#include "stdio.h"
int main(){
	int top,bottom,left,right;
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	top = 0;
	bottom = 3;
	left = 0;
	right = 3;
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