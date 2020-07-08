/***
Find remainder of two numbers without using modulus operator (%).

Input Format
a = input
b = input

Constraints
1<=a,b<=1000

Output Format
r = print the remainder

Sample Input 0
10
4

Sample Output 0
2
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d", (a - b * (a / b)));
    return 0;
}