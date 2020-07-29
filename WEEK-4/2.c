/***
PROBLEM STATEMENT
Given an array of n integers and a number k.Find the maximum sum of k
consecutive elements in the array. Find the character that is repeating maximum
number of times consecutively in a given string.

Input Format
Input String: "Lettere"

Constraints
int maxsum = sum;

Output Format
Output: t
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[100];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    fgets(line, 100, stdin);
    int max = 0, count = 0;
    char max_c;

    for (int i = 0; i < strlen(line); i++) {
        count = 0;
        for (int j = 0; j < strlen(line); j++) {
            if (line[i] == line[j]) count++;
        }
        if (count > max) {
            max = count;
            max_c = line[i];
        }
    }

    printf("%c", max_c);
    return 0;
}
