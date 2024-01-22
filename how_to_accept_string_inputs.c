**How to accept string inputs**

Problem Statement 5) Task
You need to write a program that does the following

Accepts 
2
2 space separated alphanumeric strings as input in 
1
�
�
1 
st
  line as the variables 
�
A, 
�
B
Accepts 
3
3 space separated alphanumeric strings as input in 
2
�
�
2 
nd
  line as the variables 
�
C, 
�
D, 
�
E
Accepts 
4
4 space separated alphanumeric strings as input in 
3
�
�
3 
rd
  line as the variables 
�
F, 
�
G, 
�
H, 
�
I
Prints out 
9
9 space separated strings as output in a single line to the console
Remember that the 
�
�
�
�
�
(
)
scanf() function necessarily takes the parameters to be strings.
Solve the problem in the IDE and then click on Submit to proceed.

Note- C treats all whitespace similarly while taking input.
So: scanf(“%d%d”, &a, &b);
And: scanf(“%d”, &a);
scanf(“%d”, &b);
are equivalent.

Sample 1:

Input = abc cde

fg hi jk

l m n o;          Output = abc cde fg hi jk l m n o.

-----------------------------------------------------------------------------------------------
SOLUTION = #include <stdio.h>

int main() {
    char A[10], B[10];
    char C[10], D[10], E[10];
    char F[10], G[10],H[10],I[10];
    scanf("%s%s", A , B );
    scanf("%s%s%s", C, D, E );
    scanf("%s%s%s%s", F , G, H, I );
    printf("%s %s %s %s %s %s %s %s %s ", A , B , C , D , E , F , G , H , I );  
    return 0;
}

----------------------Explanation :-
  1. Header Inclusion:

#include <stdio.h>: This line incorporates the standard input/output library for user interaction and formatting.
2. Variable Declaration:

Instead of single integers, you declare arrays of characters (strings) to store the user input:
A[10], B[10]: Each holds two strings up to 10 characters.
C[10], D[10], E[10]: Each holds three strings up to 10 characters.
F[10], G[10], H[10], I[10]: Each holds four strings up to 10 characters.
3. Input Acquisition (Multiple Scans):

Similar to the previous question, you use multiple scanf calls:
scanf("%s%s", A , B ): Scans two strings separated by whitespace into A and B.
scanf("%s%s%s", C, D, E ): Scans three strings separated by whitespace into C, D, and E.
scanf("%s%s%s%s", F , G, H, I ): Scans four strings separated by whitespace into F, G, H, and I.
4. Output Display:

A single printf call prints all nine collected strings in a single line to the console:
printf("%s %s %s %s %s %s %s %s %s ", A , B , C , D , E , F , G , H , I ): Each variable name separated by spaces ensures individual strings are printed with gaps.
5. Function Return:

return 0;: This concludes the main function and indicates successful execution.
Key Points:

C treats all whitespace (spaces, tabs, newlines) the same when reading input with scanf.
The %s format specifier tells scanf to expect a string and reads until it encounters whitespace.
Each array size (e.g., [10]) should be large enough to accommodate the expected input string length.
This code demonstrates how to handle multiple string inputs on separate lines using scanf with %s and print them all in a single line at the end.
