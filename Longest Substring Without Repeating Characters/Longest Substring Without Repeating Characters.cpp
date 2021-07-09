class Solution {
public:
    int lengthOfLongestSubstring(string S) {
        int alpha[256] = {0},count = 0,i,large=0,index =0,start=0,flag = 1;
    for(int i=0;i<256;i++){
        alpha[i]=-1;
    }
    for(i=0;S[i]!='\0';i++){
        if(alpha[S[i]]!=-1 && alpha[S[i]]>=index){
            if(count>large){
                large = count;
            }
            index = alpha[S[i]];
            alpha[S[i]]=i;
            count = i-index;
        }
        
        else{
            alpha[S[i]]=i;
            count += 1;
        }
    }
    if(count>large){
        large = count;
    }
    return large;
    }
};