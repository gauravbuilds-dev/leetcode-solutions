class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        map<char, char> mp;

        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for ( int i = 0 ; i < s.size() ; i++){

            if (s[i] == '(' || s[i] == '{' || s[i] == '['){

                st.push(s[i]);
            }
            else{
                char req = mp[s[i]];

                if (st.empty() || st.top() != req){

                    return false;

                }
                st.pop();
            }
        }

        return st.empty();
    }
};