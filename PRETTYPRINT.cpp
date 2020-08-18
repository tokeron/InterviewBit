//InterviewBit: PRETTYPRINT
//Task description: 
//https://www.interviewbit.com/problems/prettyprint/

//Print concentric rectangular pattern in a 2d matrix.
//Example:

//Input: A = 4.
//Output:
//4 4 4 4 4 4 4 
//4 3 3 3 3 3 4 
//4 3 2 2 2 3 4 
//4 3 2 1 2 3 4 
//4 3 2 2 2 3 4 
//4 3 3 3 3 3 4 
//4 4 4 4 4 4 4 

int max(int a, int b){
    return a > b ? a : b;
}

int abs(int a){
    return a < 0 ? -a : a;
}

vector<vector<int> > Solution::prettyPrint(int A) {
    int matrix_size = 2*A-1;
    vector<vector<int>> res(matrix_size, vector<int>(matrix_size,0));
    if (A == 0) return res;
    else if (A == 1) {
        res[0][0] = A;
        return res;
    }else{
        for (int i = 0; i < S; i++){
            for (int j = 0; j < 2*A-1; j++){
                res[i][j]=max(abs(A-1-i)+1,abs(A-1-j)+1);
                //the value is the max distance between the col to the center or row to the center. The center is in A-1
            }
        }
    }
    
    return res;
}
