class Solution {
public:

    vector<bool>visite;
    int helper ( int i , int n){

        // base case 
        // base case: if we successfully placed all numbers 1 to n

        if ( i >n){
            return 1;
        }


        int count = 0;

        for ( int j = 1 ; j <= n ; j++){

             // Check if number j is not visited and satisfies the beautiful property


            if (!visite[j] && ( j % i == 0 || i % j == 0)){

                visite[j] = true;

                count += helper(i + 1 , n );

                visite[j] = false;
            }
        }

        return count;

    }
    int countArrangement(int n) {
        int ans = 0;
        visite.resize(n+1 , false);
        ans += helper(1 , n);

        return ans;

    }
};