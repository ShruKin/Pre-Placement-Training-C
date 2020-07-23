/***
PROBLEM STATEMENT
You have names of n students. Enter the names one by one, store them in an 1D
array and then print the names in separate lines.

Input Format
n = enter no of students
a = enter the names in the array

Constraints
2<=n<=1000

Output Format
print the names in separate lines

Sample Input 0
5
nikola albert alan stephen erwin

Sample Output 0
nikola
albert
alan
stephen
erwin
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    char *names[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        names[i] = malloc(100 * sizeof(char));
        scanf("%s", names[i]);
    }

    for (int i = 0; i < n; i++) printf("%s\n", names[i]);

    return 0;
}
