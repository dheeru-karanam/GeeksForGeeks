#include "stdio.h"
#include "conio.h"

int main(){
	char a[10],p;
	int i;
	printf("Enter the password\n");
	for(i=0; p!='\r';i++){
		p = getch();
		if(p!='\r'){
			printf("*");
			a[i] = p;
		}
	}
	a[i-1]= '\0';
	printf("%s", a);
	return 0;
}