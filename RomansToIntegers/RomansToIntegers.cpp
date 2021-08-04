class Solution {
public:
    int romanToInt(string check) {
        int roman[27];
        roman[9]=1;
        roman[22] = 5;
        roman[24] = 10;
        roman[12] = 50;
        roman[3] = 100;
        roman[4] = 500;
        roman[13] = 1000;
        int sum =0;
        const int size = check.size();
        int i;
        for(i=0;i<size;i++){
            if(i!=0 && roman[check[i]-65+1]>roman[check[i-1]-65+1]){
                sum = sum-roman[check[i-1]-65+1]+(roman[check[i]-65+1]-roman[check[i-1]-65+1]);
			    if(sum<0){
				    return 0;
			    }
            }
            else{
                sum += roman[check[i]-65+1];
            }
        }
        return sum;
    }
};