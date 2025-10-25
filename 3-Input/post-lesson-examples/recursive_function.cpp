#include <stdio.h>
#include <stdbool.h>

/*
 * A simple recursive function to calculate the factorial of number.
 * The factorial of n (n!) is the product of all positive integers less than or equal to n.
 * Example: 5! = 5 * 4 * 3 * 2 * 1 = 120
*/

int factorial(int n){

    // 1. Base Case:
    // If n is 0, the factorial is 1. This stops the recursion.
    if (n == 0) {
        return 1;
    }

    // 2. Recursive Step:
    // The function calls itself with a smaller value (n - 1).
    // It returns n multiplied by the factorial of (n - 1).
    else {
        return n * factorial(n - 1);
    }
}

// The main function to run the code
int main() {
    int number = 5;
    int result;

    // Cal the recursive function
    result = factorial(number);

    // Print the result
    // Output will be: Factorial of 5 is 120
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}