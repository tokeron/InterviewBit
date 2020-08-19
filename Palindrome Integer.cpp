//InterviewBit: Palindrome Integer

//Task description: 
//https://www.interviewbit.com/problems/palindrome-integer/

int Solution::isPalindrome(int A) {
    string number = to_string(A);
    for (int i = 0; i <= number.size()/2; i++){
        if (number[i] != number[number.size()-1-i]) return 0;
    }
    return 1;
}
