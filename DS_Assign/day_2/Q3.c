/*
Create array of 10 students(rollno, name, marks) and sort students by their marks. 
*/

#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10

// Define the student structure
typedef struct {
    int rollno;
    char name[50];
    float marks;
} Student;

// Function to compare two students by marks
int compareStudents(const void *a, const void *b) {
    float marksA = ((Student *)a)->marks;
    float marksB = ((Student *)b)->marks;
    if (marksA < marksB) return -1;
    if (marksA > marksB) return 1;
    return 0;
}

int main() {
    // Create an array of 10 students
    Student students[NUM_STUDENTS] = {
        {1, "abc", 85.5},
        {2, "pqr", 92.0},
        {3, "xyz", 78.2},
        {4, "mno", 88.3},
        {5, "ijk", 91.5},
        {6, "def", 75.8},
        {7, "uvw", 82.6},
        {8, "lmn", 89.9},
        {9, "pqrs", 94.2},
        {10, "abcd", 79.5}
    };

    // Sort the array of students by their marks
    qsort(students, NUM_STUDENTS, sizeof(Student), compareStudents);

    // Print the sorted list of students
    printf("Roll No.\tName\t\tMarks\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d\t\t%s\t\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
