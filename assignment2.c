#include <stdio.h>
#include <string.h>  // For string comparison

/* 
1. STRUCTURES:
   Structures are user-defined data types in C 
   that allow storing multiple data items of different types together.
*/
struct Student {
    int rollno;
    char name[20];
    float marks;
};

int main() {

    /* --- Q1: Example of structure usage --- */
    struct Student s1 = {1, "Nirbhay", 89.5};
    struct Student s2 = {2, "Aman", 78.3};

    printf("Q1 Output:\n");
    printf("Student 1: Roll=%d, Name=%s, Marks=%.1f\n", s1.rollno, s1.name, s1.marks);
    printf("Student 2: Roll=%d, Name=%s, Marks=%.1f\n\n", s2.rollno, s2.name, s2.marks);
    // Output:
    // Student 1: Roll=1, Name=Nirbhay, Marks=89.5
    // Student 2: Roll=2, Name=Aman, Marks=78.3


    /* 
    2. ARRAY AND POINTERS ARRAY:
       - Array: Collection of similar data types.
       - Array of Pointers: Collection of addresses pointing to data.
    */
    printf("Q2 Output:\n");
    int arr[3] = {10, 20, 30};
    int *ptr[3];  // Array of pointers

    for (int i = 0; i < 3; i++)
        ptr[i] = &arr[i]; // Assign address of each element

    for (int i = 0; i < 3; i++)
        printf("Value at ptr[%d] = %d\n", i, *ptr[i]);
    // Output:
    // Value at ptr[0] = 10
    // Value at ptr[1] = 20
    // Value at ptr[2] = 30
    printf("\n");


    /* 
    3. COMPARE TWO STRUCTURE VARIABLES:
       Direct comparison not possible using == or !=
       So, we compare each member individually.
    */
    printf("Q3 Output:\n");
    struct Student a = {1, "Nirbhay", 89.5};
    struct Student b = {1, "Nirbhay", 89.5};

    if (a.rollno == b.rollno && strcmp(a.name, b.name) == 0 && a.marks == b.marks)
        printf("Structures are Equal\n");
    else
        printf("Structures are Not Equal\n");
    // Output:
    // Structures are Equal
    printf("\n");


    /* 
    4. ARITHMETIC OPERATIONS ON STRUCTURES:
       We can perform arithmetic on numeric members of structures.
    */
    printf("Q4 Output:\n");
    struct Student st1 = {1, "Ravi", 80.0};
    struct Student st2 = {2, "Karan", 90.0};
    float total = st1.marks + st2.marks;
    float avg = total / 2;

    printf("Total Marks = %.1f\n", total);
    printf("Average Marks = %.1f\n", avg);
    // Output:
    // Total Marks = 170.0
    // Average Marks = 85.0

    return 0;
}