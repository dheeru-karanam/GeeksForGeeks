#include "stdio.h"
#include "string.h"
int power(int a, int n){
	int pdt=1;
	for(int i=0;i<n;i++){
		pdt *= a;
	}
	return pdt;
}

void Bin_to_Dec(char bin[]){
	unsigned long long int i,sum=0;
	for(i=0;bin[i]!='\0';i++){
		sum += (bin[i]-'0')*power(2,strlen(bin)-i-1);
	}
	printf("%llu ",sum);
	return;
}

void Dec_to_Radix(int num, int Radix){
	int i=0,sum=0;
	int a[100];
	char hex[100];
	if(Radix == 16){
		while(num){
			if(num%Radix<10){
				hex[i++] = '0'+num%Radix;
			}
			else{
				hex[i++] = 'A'+(num%Radix-10);
			}
			num /= Radix;
		}
		for(int j=i;j>=0;j--){
			printf("%c",hex[j]);
		}
		return;
	}
	while(num){
		a[i] = num%Radix;
		sum += a[i]*power(10,i);
		num /= Radix;
		i += 1;
	}
	printf("%d ",sum);
	return ;	
}

int main(){
	Bin_to_Dec("11111");
	Dec_to_Radix(15,2);
	Dec_to_Radix(15,8);
	Dec_to_Radix(31,16);
	return 0;
}
