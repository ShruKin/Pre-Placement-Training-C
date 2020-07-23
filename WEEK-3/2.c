/***
PROBLEM STATEMENT
you have an 1D array of n number of strings.
Sort them in ascending order (lexicographically) using a separate function for
sorting.

Input Format
n = number of strings a = enter the array of strings

Constraints
NA

Output Format
print the sorted array

Sample Input 0
4
erwin albert stephen nikola

Sample Output 0
albert
erwin
nikola
stephen
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char a[][100], int n) {
    int i, j;
    char temp[50];
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(a[j], a[j + 1]) > 0) {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    for (i = 0; i < n; i++) printf("%s\n", a[i]);
}

int main() {
    int n, i;
    scanf("%d", &n);
    char a[n][100];
    for (i = 0; i < n; i++) scanf("%s", a[i]);
    sort(a, n);
    return 0;
}
