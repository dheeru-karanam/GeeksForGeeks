#include "stdio.h"
#define SYS_BIT 32
int main(){
	int num=-1,i=0,rev_num=0;
	while(i!=SYS_BIT){
		rev_num = (rev_num<<1) | (num&1);
		printf("rev_num = %d num = %d\n",rev_num,num);
		num = num>>1;
		i++;
	}
	printf("%u", rev_num);
}