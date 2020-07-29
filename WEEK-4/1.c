/***
PROBLEM STATEMENT
Given a string with white spaces.Write code to remove all white spaces from the
string

Input Format
Input String: "C INTERNALS FOR CODING INTERVIEWS"

Constraints
ch == '' || ch == '\t'

Output Format
Output String: "CINTERNALSFORCODINGINTERVIEWS"
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[100];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    fgets(line, 100, stdin);

    int c = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] != ' ') line[c++] = line[i];
    }
    line[c] = '\0';

    printf("%s", line);
    return 0;
}