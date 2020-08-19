//InterviewBit: Total Moves For Bishop
//Given the position of a Bishop (A, B) on an 8 * 8 chessboard
//Your task is to count the total number of squares that can be visited by the Bishop in one move
//https://www.interviewbit.com/problems/total-moves-for-bishop/


int Solution::solve(int A, int B) {
    int counter = 0;
    int max_lim = 8;
    int min_lim = 1;
    counter += min(A-1,B-1); //left low half of the board;
    counter += min (max_lim-A, B-1); //left top half of the board;
    counter += min (A-1, max_lim-B); //right low half of the board;
    counter += min(max_lim-B, max_lim-A); //right top half of the board;
    return counter;
}
