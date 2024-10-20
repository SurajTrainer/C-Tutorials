# Recursive Function in C

## Overview
This repository contains an example of a recursive function in C that calculates the factorial of a non-negative integer.

## What is Recursion?
A **recursive function** calls itself to solve a problem, consisting of:
- **Base Case**: The stopping condition.
- **Recursive Case**: The condition that triggers the function to call itself.

## Factorial Calculation
The factorial of `n` is defined as:
- Base Case: `0! = 1`
- Recursive Case: `n! = n * (n - 1)!`

## Code Example

```c
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}
```

## How to Compile and Run
1. Save as `factorial.c`.
2. Open terminal, navigate to the file's directory.
3. Compile: `gcc factorial.c -o factorial`.
4. Run: `./factorial`.

## Example Output
```
Enter a number: 5
Factorial of 5 is: 120
```

## Recursion vs Iteration
- **Recursion**: Intuitive for problems that can be divided into subproblems, may use more memory.
- **Iteration**: More efficient in terms of memory, preferred for simple repetitive tasks.

## Conclusion
Understanding recursion is essential for solving complex problems in programming, especially in data structures and algorithms.
