/***
PROBLEM STATEMENT
Perform right shift operation by n on an 1D array of size m. For example say,
A[5] = {1,2,3,4,5}. If we are right shifting the elements by 3 then the output
will be{3, 4, 5, 1, 2}

Input Format
m = size of the array
n = how many positions to be shifted
a = enter the array

Constraints
3<=n<=100

Output Format
print the array after shifting the elements

Sample Input 0
5
3
1 2 3 4 5

Sample Output 0
3 4 5 1 2

Explanation 0
no of elements in the array = 5
no of positions to shift = 3
the input array is [1, 2, 3, 4, 5]
so, 4 shifted from index 3 to 1
5 shifted from index 4 to 2
3 shifted from index 2 to 0
2 shifted from index 1 to 4
1 shifted from index 0 to 3
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rrot(int arr[], int n) {
    int j, last;
    last = arr[n - 1];
    for (j = n - 1; j > 0; j--) {
        arr[j] = arr[j - 1];
    }
    arr[0] = last;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, s, arr[100];
    scanf("%d %d", &n, &s);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < s; i++) rrot(arr, n);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
