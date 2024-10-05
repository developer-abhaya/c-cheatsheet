#include <stdio.h>

int main()
{
    int a = 6, b = 7;

    //   Arthemetic series of operations

    printf(" Arthemetic operations:\n");
    printf("a + b = %d\n", a+b); //Addition
    printf("a - b = %d\n", a-b); //Subtraction
    printf("a * b = %d\n", a*b); //Multiplication
    printf("a / b = %d\n", a / b); //Division


    // Relational operators
    printf("\nRelational Operations:\n");
    printf("a == b: %d\n", a == b);  // Equal to
    printf("a != b: %d\n", a != b);  // Not equal to
    printf("a > b: %d\n", a > b);    // Greater than
    printf("a < b: %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);  // Greater than or equal to
    printf("a <= b: %d\n", a <= b);  // Less than or equal to

    // Logical operators
    int x = 1, y = 0;
    printf("\nLogical Operations:\n");
    printf("x && y: %d\n", x && y);  // Logical AND
    printf("x || y: %d\n", x || y);  // Logical OR
    printf("!x: %d\n", !x);          // Logical NOT

    // Assignment operators
    int num = 10;
    printf("\nAssignment Operations:\n");
    printf("Initial value of num: %d\n", num);
    num += 5;  // num = num + 5
    printf("After num += 5: %d\n", num);
    num *= 2;  // num = num * 2
    printf("After num *= 2: %d\n", num);

    // Increment and Decrement operators
    int inc = 5;
    printf("\nIncrement/Decrement Operations:\n");
    printf("Initial value of inc: %d\n", inc);
    printf("Post-increment (inc++): %d\n", inc++);  // Post-increment
    printf("After post-increment: %d\n", inc);
    printf("Pre-increment (++inc): %d\n", ++inc);   // Pre-increment
    printf("Post-decrement (inc--): %d\n", inc--);  // Post-decrement
    printf("Pre-decrement (--inc): %d\n", --inc);   // Pre-decrement

    // Bitwise operators
    int bit1 = 6, bit2 = 3; // 6 = 110 in binary, 3 = 011 in binary
    printf("\nBitwise Operations:\n");
    printf("bit1 & bit2 = %d\n", bit1 & bit2);  // Bitwise AND
    printf("bit1 | bit2 = %d\n", bit1 | bit2);  // Bitwise OR
    printf("bit1 ^ bit2 = %d\n", bit1 ^ bit2);  // Bitwise XOR
    printf("~bit1 = %d\n", ~bit1);              // Bitwise NOT
    printf("bit1 << 1 = %d\n", bit1 << 1);      // Left shift
    printf("bit2 >> 1 = %d\n", bit2 >> 1);      // Right shift


    return 0;
 
}