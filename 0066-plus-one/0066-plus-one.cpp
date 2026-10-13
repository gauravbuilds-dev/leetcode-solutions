class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();


        // start from last digits
        for ( int i = n-1 ; i >= 0 ; i--){

            if(digits[i] < 9 ){

                digits[i]++;

                return digits;
            }

            digits[i] = 0 ; //set 0 and carry over
        }

        // if all digits were 9 (like [9] , [9,9] , [9,9,9])

        digits.insert(digits.begin() , 1 );

        return digits;
    }
};