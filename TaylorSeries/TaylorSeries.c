#include "stdio.h"
float fact(int n);
float power(int n, int k);


float power(int n, int k){
	if(k==0){
		return 1;
	}
	else{
		return n*power(n,k-1);
	}
}

float fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

float TaylorSeries(float base, float pows){
	static float sum =0;
	if(pows==0){
		return sum+power(base,pows)/fact(pows);
	}
	else{
		sum += power(base,pows)/fact(pows);
		return TaylorSeries(base,pows-1);
	}
}

int main(){
	float i,n=15,base = 4;
	float sum=0;
	printf("%f ", TaylorSeries(base, n));
}