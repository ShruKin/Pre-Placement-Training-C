/***
PROBLEM STATEMENT
You have been given an array of n positive numbers.
Now print the same array of n length but here every index will contain the sum
of all the elements in the array except the element on that index. For example
a[i] = a[0]+a[1]+….+a[i-1]+a[i+1]+…+a[n-1].

Input Format
n = enter the size of the array
a = enter the array

Constraints
3<=n<=100

Output Format
print the output array

Sample Input 0
6
1 2 3 4 5 6

Sample Output 0
20 19 18 17 16 15

Explanation 0
a[0] = 1, so in output array a'[0] = 2+3+4+5+6 = 20
a[1] = 2, so in output array a'[1] = 1+3+4+5+6 = 19
a[2] = 3, so in output array a'[2] = 1+2+4+5+6 = 18
a[3] = 4, so in output array a'[3] = 1+2+3+5+6 = 17
a[4] = 5, so in output array a'[4] = 1+2+3+4+6 = 16
a[5] = 6, so in output array a'[5] = 1+2+3+4+5 = 15
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    for (int i = 0; i < n; i++) printf("%d ", sum - arr[i]);

    return 0;
}