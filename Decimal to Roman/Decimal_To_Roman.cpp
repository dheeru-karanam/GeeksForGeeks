// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


string convertToRoman(int ) ;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	cout << convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}// } Driver Code Ends


/*you are required to complete 
this function*/

// n :given number that you are require to convert
string convertToRoman(int num) 
{
    string res;
    char roman[13][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int decimal[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    int temp,i=12,k=0;
    while(num>=1){
        temp = num;
        while(temp/decimal[i]>0){
            res += roman[i];
            temp = temp-decimal[i];
        }
        i--;
        num = temp;
    }
	return res;
}