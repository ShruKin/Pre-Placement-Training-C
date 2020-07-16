/***
PROBLEM STATEMENT
Take a 2D array of size 2Xn. 1st row contains the roll numbers and 2nd row
contains corresponding marks in exam. 'n' is the number of students here. Now
sort the marks in ascending order along with the roll numbers and.

Input Format
n = no of students
a[0][j] = enter the roll numbers
a[1][j] = enter the corresponding marks

Constraints
3<=n<=100
0<=a[1][j]<=100
1<=a[0][j]<=100

Output Format
print the sorted array with roll number one by one in seperated line in
ascending order.

Sample Input 0
5
1 2 3 4 5
98 90 85 95 89

Sample Output 0
3 - 85
5 - 89
2 - 90
4 - 95
1 - 98

Explanation 0
we have 5 students. roll no 1 to 5
the above 2d array indicates that
roll 1 has got 98, 2 has got 90, 3 hs got 85, 4 has got 95, 5 has got 89
when we sort this according to question the 2d array becomes -
3 5 2 4 1
85 89 90 95 98
now we can print the given output.
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, mat[2][100];

    scanf("%d", &n);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (mat[1][i] > mat[1][j]) {
                int t = mat[0][i];
                mat[0][i] = mat[0][j];
                mat[0][j] = t;

                t = mat[1][i];
                mat[1][i] = mat[1][j];
                mat[1][j] = t;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d - %d\n", mat[0][i], mat[1][i]);
    }
    return 0;
}
