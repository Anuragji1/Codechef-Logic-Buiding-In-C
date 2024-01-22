**How to accept multiple integers on separate lines**

Statement 4) How to accept multiple integers on separate lines) Let's add a little more complexity.

You need to write a program which does the following

Accepts 
2
2 integers as input in 1st line as the variables 
�
A, 
�
B
Accepts 
3
3 integers as input in the 2nd line as the variables 
�
C, 
�
D and 
�
E
Accepts 
4
4 integers as input in the 3rd line as the variables 
�
F, 
�
G, 
�
H and 
�
I
Prints out 
9
9 integers as output in a single line to the console
Code the solution in the IDE and then click Submit to continue.

Sample 1:
Input =
1 2
3 4 5
6 7 8 9
Output = 1 2 3 4 5 6 7 8 9
Sample 2:
Input =
12 34
567 789 101112
13 14 15 16
Output = 12 34 567 789 101112 13 14 15 16.

-----------------------------------------------------------------------------------------------------------------------------
SOLUTION = #include <stdio.h>

int main() {
    int A, B;
    int C, D, E;
    int F, G,H,I;
    scanf("%d%d", &A , &B );
    scanf("%d%d%d", &C, &D, &E );
    scanf("%d%d%d%d", &F , &G, &H, &I );
    printf("%d %d %d %d %d %d %d %d %d", A , B , C , D , E , F , G , H, I );  
    return 0;
}

-----------------------------
  
