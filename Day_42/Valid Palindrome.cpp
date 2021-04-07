//Code:

class Solution {
public:
    bool isPalindrome(string s) {
      string palindrome = "", reversePalindrome;
        for(char i: s){
            if((int) i >= 65 && (int) i <= 90){
                palindrome += (char) (((int) i)+32);
            }else if((int) i >= 97 && (int) i <= 122){
                palindrome += (char) ((int) i);
            }else if(i - '0' < 10 && i - '0' >= 0){
                palindrome += i;
            }
        }
        reversePalindrome = palindrome;
        reverse(reversePalindrome.begin(), reversePalindrome.end());
        if(palindrome != reversePalindrome){
            return false;
        }else{
            return true;
        }
    }
};
