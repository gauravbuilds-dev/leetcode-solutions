class Solution {
public:

    vector<string>ans;

    string temp;


    bool flag;

    void helper( int i , int n , int k , bool flg ){

        if (i == n){

            if ( k >= 0 ){
                ans.push_back(temp);
            }

            return;

        }

        if ( i > n || k < 0 ){
            return ;
        }

        //  1 place

        if ( flg ){

            temp.push_back('1');

            helper( i+1 , n , k-i , false);

            temp.pop_back();
        }

        // o placing

        temp.push_back('0');
        helper(i + 1 , n  , k , true);
        temp.pop_back();
    }
    vector<string> generateValidStrings(int n, int k) {
        
        helper(0 , n , k , true);

        return ans;
        
    }
};