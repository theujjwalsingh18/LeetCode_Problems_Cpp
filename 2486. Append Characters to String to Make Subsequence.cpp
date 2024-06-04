class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.length();
        int n = t.length();

        int i = 0;
        int j = 0;
        while (i<m && j <n){
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }
        int remaining_char = n - j;
        return remaining_char;
    }
};