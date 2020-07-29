/***
PROBLEM STATEMENT
Write down a C program to read and print name, where memory for variable should
be declared at run time.

Input Format
Enter maximum length of name:30 Enter name:Aditi Roy

Constraints
name=(char*)malloc(limit*sizeof(char))

Output Format
Enter maximum length of name: 30 Enter name: Aditi Roy Hi! Aditi, Welcome at the
class.
***/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int len;
    printf("Enter maximum length of name:");
    scanf("%d", &len);
    printf("%d", len);

    char* name = (char*)malloc(len * sizeof(char));
    printf("Enter name:");
    char ch = getchar();
    fgets(name, len, stdin);
    printf("%s", name);

    printf("Hi! ");
    int i = 0;
    while (name[i] != ' ' && name[i] != '\0') printf("%c", name[i++]);
    printf(", Welcome at the class.");
    return 0;
}
