/***
PROBLEM STATEMENT
Multiply two matrices using a fucntion and pass two input matrices as parameter
of the fucntion

Input Format
n1 = enter number of rows in 1st matrix
n2 = enter number of rows in 2nd matrix
m1 = enter number of columns in 1st matrix
m2 = enter number of columns in 2nd matrix
a = enter the 1st matrix
b = enter the 2nd matrix

Constraints
2<=n1,n2,m1,m3<=10

Output Format
print the output

Sample Input 0
2
2
2
2
1 2
2 1
2 4
1 2

Sample Output 0
4 8
5 10
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mul(int a[10][10], int b[10][10], int n1, int m1, int m2) {
    int mult[10][10];

    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < m2; ++j) {
            mult[i][j] = 0;
            for (int k = 0; k < m1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a[10][10], b[10][10], m1, n1, m2, n2;
    scanf("%d%d%d%d", &n1, &n2, &m1, &m2);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    mul(a, b, n1, m1, m2);

    return 0;
}