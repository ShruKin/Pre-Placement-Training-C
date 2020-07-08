/***
PROBLEM STATEMENT
Alan and Stephen have given a merit test based on which the winner of a physics
olympiad is to be announced. Help the authority to find the winner using only
basic arithmetic operators(abs() is allowed). You are not allowed to use any
conditional statement or operator.

Input Format
Alan = input
Stephen = input

Constraints
50<=Alan,Stepehen<=1000

Output Format
Print the winner's name

Sample Input 0
250
360

Sample Output 0
Stephen
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, s;
    scanf("%d", &a);
    scanf("%d", &s);

    char *b[2] = {"Alan", "Stephen"};
    printf("%s", b[!(a / s)]);

    return 0;
}