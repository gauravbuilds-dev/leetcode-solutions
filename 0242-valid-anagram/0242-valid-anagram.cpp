class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        int len1 = s.size();
        int len2 = t.size();

        if(len1 != len2){

            return false;

        }else if ( s != t){

            return false;

        }else{

            return true;
        }
    }
};