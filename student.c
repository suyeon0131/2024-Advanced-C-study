#include "student.h"

Student *createStudents(int n) {
   Student *students = (Student*)calloc(n, sizeof(Student));

   // return students;
}

Student newStudent(char *name, int id) {
   Student student;
   student.id = id;
   student.name = (char*)calloc(sizeof(char), (strlen(name) + 1));
   strcpy(student.name, name);

   return student;
}

void appendStudent(Student *students, int index, Student student) {
   students[index] = student;
}

void printStudents(FILE *output, Student *students, int length) {
  for (int i = 0; i < length; i++) {
    fprintf(output, "name: %s id: %d\n", students[i].name, students[i].id);
  }
}

void freeStudents(Student *students, int length) {
   for (int i = 0; i < length; i++) {
      free(students[i].name);
   }
   free(students);
}