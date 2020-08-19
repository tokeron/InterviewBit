
//InterviewBit: Excel Column Number
//Task description: 
//https://www.interviewbit.com/problems/excel-column-number/
//Given a column title A as appears in an Excel sheet, return its corresponding column number.

int Solution::titleToNumber(string A) {
    int counter = 0;    
    int size = A.size();
    for( int i = 0; i <= size - 1; i++ ){
        counter += pow(26,size-i-1)*((int)A[i] - 'A' + 1); //simple math with letters as numbers in 26 base
    }
    return counter;
}
