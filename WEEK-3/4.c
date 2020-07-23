/***
PROBLEM STATEMENT
Take two strings as input and write a fucntion to concatenate them with a space
in between

Input Format
str1 = 1st string
str2 = 2nd string

Constraints
NA

Output Format
print the concatenated string.

Sample Input 0
Alan
Turing

Sample Output 0
Alan Turing
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[100], b[100], c[201];
    scanf("%s", a);
    scanf("%s", b);

    strcpy(c, a);
    strcat(c, " ");
    strcat(c, b);

    printf("%s", c);

    return 0;
}