#include "stdio.h"
int main(){
	int N,i,count=0;
	scanf("%d", &N);
	int arr[N];
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		if(count>=arr[i]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}