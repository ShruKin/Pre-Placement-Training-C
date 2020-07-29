/***
PROBLEM STATEMENT
Write a program to make a valid pointer as a NULL pointer using C program.

Input Format
ptr1 ptr2 ptr3

Constraints
ptr1 == 0

Output Format
ptr1 = Not NULL ptr2 = NULL ptr3 = NULL
***/

/*
Couldn't figure out the problem, though a sample program to make
a pointer null is give below
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptra = &a;

    if(ptra == NULL)
		printf("ptra: NULL\n");
	else
		printf("ptra: NOT NULL\n");

	//assigning 0 
	ptra = 0;
	if(ptra == NULL)
		printf("ptra: NULL\n");
	else
		printf("ptra: NOT NULL\n");

    return 0;
}
