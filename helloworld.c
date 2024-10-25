#include <stdio.h>

int main()
{
    // printf("hello world");

    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration + initialization

    int age = 19;     // integer
    float gpa = 3.5;  // float point number
    char grade = 'c'; // single character

    char name[] = "Bro"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old \n", age);
    printf("Your average grade is %c \n", grade);
    printf("Your GPA is %f \n", gpa);

    return 0;
}