/***
Take a nXn matrix and change all its diagonal elements to 0.
Use a function named null_diagonal() and pass the matrix as its parameter to
perform the task.

Input Format
n = enter the dimension of the matrix
a = enter the matrix

Constraints
1<=a[i][j]<=1000

Output Format
print the updated mtrix

Sample Input 0
3
1 2 3
4 5 6
2 4 7

Sample Output 0
0 2 3
4 0 6
2 4 0
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void null_diagonal(int a[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                a[i][j] = 0;
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a[10][10], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    null_diagonal(a, n);
    return 0;
}
