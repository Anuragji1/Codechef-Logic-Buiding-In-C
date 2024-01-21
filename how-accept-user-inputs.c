**How to accept User Inputs**

Statement 3) Task
Let us define a variable n that accepts integer inputs.
Output the same variable n.
Code the solution in the IDE and then click Submit to continue.

Sample 1:
Input: 6
Output: 6


----------------------------------------------------------------------------
SOLUTION = #include <stdio.h>  //This line incorporates the standard input/output library (stdio.h), providing essential functions for interacting with user input and output.

int main() {  //This marks the beginning of the main function, the program's entry point.
The int indicates that the function returns an integer value (0 typically signals successful execution).
    int n;  //This declares a variable named n of type int, meaning it's capable of storing integer values.

    scanf("%d", &n ); //This line prompts the user to enter an integer value.
scanf is a function from stdio.h that reads formatted input from the console.
%d is a format specifier that tells scanf to expect an integer.
&n provides the address of the variable n, where the input value will be stored.

    printf("%d", n );  //This line prints the value stored in the variable n to the console.
printf is another function from stdio.h used for formatted output.
%d is again used as the format specifier to print an integer.
  
    return 0; //This statement concludes the main function and returns 0 to the operating system, signifying successful program termination.
}
