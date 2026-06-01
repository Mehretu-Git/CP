/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int correctGuess;
        int min_ = 1;
        int max_ = n;
        while(min_ <= max_){
            int usersGuess = min_ + (max_-min_)/2;
            if(guess(usersGuess) == -1) // go low
                max_ = usersGuess - 1;
            else if(guess(usersGuess) == 1) // go high
                min_ = usersGuess + 1;
            else{ // number found!
                correctGuess = usersGuess;
                break;
            }
        }

        return correctGuess;
    }
};