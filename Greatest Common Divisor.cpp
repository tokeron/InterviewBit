
//InterviewBit: Greatest Common Divisor

//Task description: 
//https://https://www.interviewbit.com/problems/greatest-common-divisor/
//Given 2 non negative integers m and n, find gcd(m, n)

//Rrecursive euclidean algorithm gcd
int Solution::gcd(int A, int B) {
    if (A==0) return B;
    if (B==0) return A;
    return A > B ? gcd(A-B, B) : gcd(A, B-A);
}
