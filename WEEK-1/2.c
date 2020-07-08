/***
PROBLEM STATEMENT
You have to print all the natural numbers upto N without using any semi colon
(;). But instead of loop use recursive function call.

Input Format
N = input

Constraints
3<=N<=100000

Output Format
Print the natural number

Sample Input 0
4

Sample Output 0
1
2
3
4
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(int N) {
  if (N > 1)
    if (f(N - 1), 1) {}
  if (printf("%d\n", N)) {}
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    if (scanf("%d", &N)) {}
    if (f(N), 1) {}
    return 0;
}