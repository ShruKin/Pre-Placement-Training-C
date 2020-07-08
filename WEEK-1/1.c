/***
PROBLEM STATEMENT
Alan has a calculator but the button for addition (+) is not working on it. 
But he cannot perform addition by his own. Help him adding two numbers without using + operator.

Input Format
a = 1st input
b = 2nd input

Constraints
1<=a,b<=10000

Output Format
sum = Output

Sample Input 0
14563
34986

Sample Output 0
49549
***/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d%d", &a, &b);

    while (b > 0) {
        a++;
        b--;
    }
    printf("%d", a);
    return 0;
}