class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n1 = s.length();
        int n2 = t.length();

        int j = 0;

        for(int i = 0 ; i < n2 ; i++){

            if (j < n1 && t[i] == s[j]){

                j++;
            }
        }

        return j == n1;
    }
};