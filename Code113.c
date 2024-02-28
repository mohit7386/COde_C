//WAP and Format the information of 5 students (name,marks, cgpa, course) in a table like structure in a file.
#include <stdio.h>
//Creating the Structure for taking the information of 5 Students 
typedef struct studentinfo { //I am prefering always use typedef for alias names because after that you don't need to write the whole name
    char name[50];
    int marks;
    float cgpa;
    char course[50];
} Student;
//Creating a file here one thing kept in mind we always initialise the file pointer after the decleration of the structure
int main() { 
    FILE *file;
    file = fopen("student_info.txt", "w");

    // if (file == NULL) {
    //     printf("Error opening the file.\n");
    //     return 1;  // Return an error code to indicate failure
    // }

    // Header for the table
    fprintf(file, "%-20s%-10s%-10s%-20s\n", "Name", "Marks", "CGPA", "Course");
    
    // Information for 5 students
    Student students[5] = { //Here Student is a alias name of the structure struct studentinfo
    //Initialisation of the structure in which all the details in the correct order 
        {"John Doe", 85, 3.5, "Computer Science"},
        {"Jane Smith", 92, 3.8, "Physics"},
        {"Alice Johnson", 78, 3.2, "Mathematics"},
        {"Bob Brown", 88, 3.6, "Chemistry"},
        {"Eva Davis", 95, 4.0, "Biology"}
    };

    // here we are Writing all students information into the file
    for (int i = 0; i < 5; i++) {
        fprintf(file, "%-20s%-10d%-10.2f%-20s\n", students[i].name, students[i].marks, students[i].cgpa, students[i].course);
    }

    printf("Student information has been written to the file.\n");

    // Close the file
    fclose(file);

    return 0;
}
