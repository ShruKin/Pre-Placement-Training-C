/***
Take an integer as input that can have maximum of 32 bits in its binary
representation. Check whether nth bit from lsb is set or not? Take decimal
values as input and start counting lsb as 0th bit.

Input Format
p = input number in decimal
n = position of the bit to be checked

Constraints
5<=p<=2^32
1<=n<=32

Output Format
if set print "yes"
if not print "no"

Sample Input 0
5
2

Sample Output 0
yes
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p, n;
    scanf("%d", &p);
    scanf("%d", &n);

    if ((p >> n) & 1)
        printf("yes");
    else
        printf("no");
    return 0;
}