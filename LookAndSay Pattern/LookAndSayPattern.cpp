// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    string lookandsay(int n) {
        // code here
        int count = 1;
        string str="1";
		string line="";
        char temp;
		temp = str[0];
		for(int i=1;i<n;i++){
			temp = str[0];
			for(int j=1;j<str.length();j++){
				if(str[j]!=temp){
					line += to_string(count) + temp;
					count = 1;
					temp = str[j];
				}
				else{
					count += 1;
				}
			}
			line += to_string(count) + temp;
			str = line;
			line = "";
			count = 1;
		}
        return str;
    }   
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends