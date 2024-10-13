# C-Tutorials

# Running C Programs with GCC

This guide explains how to compile and run a basic C program using **GCC**.

## How to Compile

1. Open your terminal or command prompt.
2. Navigate to the folder containing your C file.
3. Use the following command to compile the C program:
    ```bash
    gcc <filename>.c
    ```
   This will create a default output file called `a.exe` (on Windows).

   Example:
    ```bash
    gcc program.c
    ```

## How to Run

1. After compiling, run the executable with:
    ```bash
    ./a.exe
    ```
   Example:
    ```bash
    ./a.exe
    ```

This will execute your C program.

## Notes

- `gcc <filename>.c` compiles the C code and generates an executable file named `a.exe` by default.
- To give a custom name to the output file, you can use the `-o` flag like this:
    ```bash
    gcc <filename>.c -o <outputname>.exe
    ```
