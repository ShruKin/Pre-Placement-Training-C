/***
PROBLEM STATEMENT
Check whether a matrix of nXm size is sparse or not

Input Format
n = no of rows of the matrix
m = no of columns of the matrix
a = enter the elements in the matrix

Constraints
2<=n,m<=8

Output Format
if it is a sparse matrix print YES
else print NO

Sample Input 0
3
3
1 0 0
0 0 0
0 5 0

Sample Output 0
YES
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int r, c, mat[8][8], co = 0;

    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0) co++;
        }
    }

    if (co >= (r * c) / 2)
        printf("YES");
    else
        printf("NO");
    return 0;
}