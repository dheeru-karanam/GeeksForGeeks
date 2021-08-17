class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        int i,j= 0;
        t.resize(s.size());
        for(int i=0;i<s.size();i++){
            if((s[i]>=97 && s[i]<=97+25) || (s[i]>=65 && s[i]<=65+25) || (s[i]>=48 && s[i]<=48+9)){
                t[j++] = tolower(s[i]);
            }
        }
        i =0;
        j--;
        while(i<=j){
            if(t[i]!=t[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
};