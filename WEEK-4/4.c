/***
PROBLEM STATEMENT
Write a C program to modify the value of a variable using pointer.

Input Format
value of num: 20 value of num: 30

Constraints
int num

Output Format
value of num: 20 value of num: (using pointer): 20 value of num: 30 value of num
(using pointer): 30
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    printf("value of num:");
    scanf("%d", &a);
    printf("%d", a);
    printf(" value of num: (using pointer): %d", *(&a));

    printf("value of num:");
    scanf("%d", &b);
    printf("%d", b);
    printf(" value of num: (using pointer): %d", *(&b));
    return 0;
}
