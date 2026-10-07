class Solution {
public:
    vector<string>ans;
    string temp;

    void helper( int o , int c , int n){

        // base case

        if ( temp.size() == 2*n){

            ans.push_back(temp);

            return;
        }

        if ( o < n) {

            temp.push_back('(');
            helper(o + 1 , c , n);
            temp.pop_back();
        }                            

        if ( o > c ){

            temp.push_back(')');
            helper(o , c + 1 , n);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        
        helper(0 ,0 , n);
        return ans;
    }
};