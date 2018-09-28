// Given a Matrix mat of N*N size, the task is to complete the function constructLinkedMatrix(), that constructs a 2D linked list representation of the given matrix.

// Input : 2D matrix 
// 1 2 3
// 4 5 6
// 7 8 9

// Output :
// 1 -> 2 -> 3 -> NULL
// |    |    |
// v    v    v
// 4 -> 5 -> 6 -> NULL
// |    |    |
// v    v    v
// 7 -> 8 -> 9 -> NULL
// |    |    |
// v    v    v
// NULL NULL NULL
// Input:
// The fuction takes 2 argument as input, first the 2D matrix mat[][] and second an integer variable N, denoting the size of the matrix.
// There will be T test cases and for each test case the function will be called separately.

// Output:
// The function must return the reference pointer to the head of the linked list.

// Constraints:
// 1<=T<=100
// 1<=N<=150

// Example:
// Input:
// 2
// 3
// 1 2 3 4 5 6 7 8 9
// 2
// 1 2 3 4
// Output:
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4

Node* construct(int mat[MAX][MAX], int n, int i,int j){
    if(i>n-1 || j>n-1){
        return NULL;
    }
    Node* c = new Node;
    c->data = mat[i][j];
    c->down = construct(mat,n,i+1,j);
    c->right = construct(mat,n,i,j+1);
    return c;
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    return construct(mat,n,0,0);
}