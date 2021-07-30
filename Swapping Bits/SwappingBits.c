#include <stdio.h>
int main(){
	int num = 0x1234;
	int bit1 = 5;
	int bit2 = 11;
	if(((num>>(bit1-1))&1) != ((num>>(bit2-1))&1))
		num = num ^ (1<<(bit1-1) | 1<<(bit2-1));
	printf("%X", num);
	return 0;
}
