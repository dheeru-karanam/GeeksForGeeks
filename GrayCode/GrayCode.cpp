#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;	
	
int main(){
	int n=3;
	int a;
	int i, msb;
	int pows = pow(2,n);
	string inter="";
	vector<string> res;
	for(i=0;i<pows;i++){
		msb = n;
		while(msb){
			a = ((i&1<<msb)>>msb)^((i&1<<(msb-1))>>(msb-1));
			inter = inter + (char)(a+48);
			msb -= 1;
        }
		res.push_back(inter);
        inter = "";
	}
	for(i=0;i<pows;i++){
		cout<<res[i]<<endl;
	}
}
