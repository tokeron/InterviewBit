//InterviewBit: Colorful Number

//Task description: For Given Number N find if its COLORFUL number or not
//A number can be broken into different contiguous sub-subsequence parts. 
//Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245. 
//And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different
//https://www.interviewbit.com/problems/colorful-number/

int Solution::colorful(int A) {
    string num = to_string(A);
    unordered_map<int, int> ht;
    for (int i = 0; i < num.size(); i++){
        int sum = 1;
        for(int j = i; j < num.size(); j++){
            sum *= num[j] - '0';
            if (ht.find(sum) != ht.end()) return 0;
            ht[sum]++;
        }
    }
    return 1;
}
